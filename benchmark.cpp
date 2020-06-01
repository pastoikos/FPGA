/*

 Copyright (c) 2014 University of Edinburgh, Imperial College, University of Manchester.
 Developed in the PAMELA project, EPSRC Programme Grant EP/K008730/1

 This code is licensed under the MIT License.

 */
#define NRM  "\x1B[0m"
#define RED  "\x1B[31m"
#define GRN  "\x1B[32m"
#define YEL  "\x1B[33m"
#define BLU  "\x1B[34m"
#define MAG  "\x1B[35m"
#define CYN  "\x1B[36m"
#define WHT  "\x1B[37m"


#include <kernels.h>
#include <interface.h>
#include <stdint.h>
#include <vector>
#include <sstream>
#include <string>
#include <cstring>
#include <time.h>
#include <csignal>

#include <sys/types.h>
//#include <sys/stat.h>
#include <sstream>
#include <iomanip>
#include <getopt.h>

inline double tock() {
	synchroniseDevices();
#ifdef __APPLE__
		clock_serv_t cclock;
		mach_timespec_t clockData;
		host_get_clock_service(mach_host_self(), SYSTEM_CLOCK, &cclock);
		clock_get_time(cclock, &clockData);
		mach_port_deallocate(mach_task_self(), cclock);
#else
		struct timespec clockData;
		clock_gettime(CLOCK_MONOTONIC, &clockData);
#endif
		return (double) clockData.tv_sec + clockData.tv_nsec / 1000000000.0;
}	



/***
 * This program loop over a scene recording
 */

int main(int argc, char ** argv) {
	
	/*
	char *token=NULL;
	char arguments1[]= "./build/kfusion/kfusion-benchmark-cuda -i living_room_traj2_loop.raw  -s 4.8 -p 0.34,0.5,0.24 -z 4 -c 2 -r 1 -k 481.2,480,320,240 > benchmark.log";
	char arguments2[]= "./build/kfusion/kfusion-benchmark-cuda -i living_room_traj2_loop.raw  -s 4.8 -p 0.34,0.5,0.24 -z 4 -c 2 -r 1 -k 481.2,480,320,240 > benchmark.log";
	argc = 0;
	token = strtok(arguments1, " ");

	while(token!=NULL){

		//printf("%s\n", token); 
		argc++;
		token = strtok(NULL, " ");
    }

     //std::cout << "argc :" << argc << std::endl;


     argv = (char **)malloc(argc*sizeof(char *));
     token = strtok(arguments2, " ");

	for (int i =0 ; i< argc; i++){

		argv[i] = strdup(token);

		//std::cout<< "argv" << "[" << i <<"] : " << argv[i] << std::endl;

		token = strtok(NULL, " ");
	}
	*/
	

	Configuration config(argc, argv);

	// ========= CHECK ARGS =====================

	std::ostream* logstream = &std::cout;
	std::ofstream logfilestream;
	assert(config.compute_size_ratio > 0);
	assert(config.integration_rate > 0);
	assert(config.volume_size.x > 0);
	assert(config.volume_resolution.x > 0);

	if (config.log_file != "") {
		logfilestream.open(config.log_file.c_str());
		logstream = &logfilestream;
	}
	if (config.input_file == "") {
		std::cerr << "No input found." << std::endl;
		config.print_arguments();
		exit(1);
	}

	// ========= READER INITIALIZATION  =========

	DepthReader * reader;

	//if (is_file(config.input_file)) {
		reader = new RawDepthReader(config.input_file, config.fps,
				config.blocking_read);

	//} else {
//reader = new SceneDepthReader(config.input_file, config.fps,
		//		config.blocking_read);
	//}

	std::cout.precision(10);
	std::cerr.precision(10);

	float3 init_pose = config.initial_pos_factor * config.volume_size;
	const uint2 inputSize = reader->getinputSize();
	std::cerr << "input Size is = " << inputSize.x << "," << inputSize.y
			<< std::endl;

	//  =========  BASIC PARAMETERS  (input size / computation size )  =========

	const uint2 computationSize = make_uint2(
			inputSize.x / config.compute_size_ratio,
			inputSize.y / config.compute_size_ratio);
	float4 camera = reader->getK() / config.compute_size_ratio;

	if (config.camera_overrided)
		camera = config.camera / config.compute_size_ratio;
	//  =========  BASIC BUFFERS  (input / output )  =========

	// Construction Scene reader and input buffer
	uint16_t* inputDepth = (uint16_t*) malloc(
			sizeof(uint16_t) * inputSize.x * inputSize.y);
	uchar4* depthRender = (uchar4*) malloc(
			sizeof(uchar4) * computationSize.x * computationSize.y);
	uchar4* trackRender = (uchar4*) malloc(
			sizeof(uchar4) * computationSize.x * computationSize.y);
	uchar4* volumeRender = (uchar4*) malloc(
			sizeof(uchar4) * computationSize.x * computationSize.y);

	uint frame = 0;
	/*
	printf("config.volume_resolution.x: %u \n", config.volume_resolution.x);
	printf("config.volume_resolution.y: %u \n", config.volume_resolution.y);
	printf("config.volume_resolution.z: %u \n", config.volume_resolution.z);
	printf("config.volume_size.x: %f \n", config.volume_size.x);
	printf("config.volume_size.y: %f \n", config.volume_size.y);
	printf("config.volume_size.z: %f \n", config.volume_size.z);*/
	Kfusion kfusion(computationSize, config.volume_resolution,
			config.volume_size, init_pose, config.pyramid);

	double timings[7];
	timings[0] = tock();

	*logstream
			<< "frame\tacquisition\tpreprocessing\ttracking\tintegration\traycasting\trendering\tcomputation\ttotal    \tX          \tY          \tZ         \ttracked   \tintegrated"
			<< std::endl;
	logstream->setf(std::ios::fixed, std::ios::floatfield);

	while (reader->readNextDepthFrame(inputDepth)) {

		Matrix4 pose = kfusion.getPose();

		float xt = pose.data[0].w - init_pose.x;
		float yt = pose.data[1].w - init_pose.y;
		float zt = pose.data[2].w - init_pose.z;

		timings[1] = tock();

		kfusion.preprocessing(inputDepth, inputSize);

		timings[2] = tock();

		bool tracked = kfusion.tracking(camera, config.icp_threshold,
				config.tracking_rate, frame);

		timings[3] = tock();

		bool integrated = kfusion.integration(camera, config.integration_rate,
				config.mu, frame);

		timings[4] = tock();

		bool raycast = kfusion.raycasting(camera, config.mu, frame);

		timings[5] = tock();

		kfusion.renderDepth(depthRender, computationSize);
		kfusion.renderTrack(trackRender, computationSize);
		double t1 = tock();
		kfusion.renderVolume(volumeRender, computationSize, frame,
				config.rendering_rate, camera, 0.75 * config.mu);
		double t2 = tock()-t1;
		//printf("time : %lf\n", t2);

		timings[6] = tock();

		*logstream <<frame <<"\t" << timings[1] - timings[0] << "\t" //  acquisition
				<< timings[2] - timings[1] << "\t"     //  preprocessing
				<< timings[3] - timings[2] << "\t"     //  tracking
				<< timings[4] - timings[3] << "\t"     //  integration
				<< timings[5] - timings[4] << "\t"     //  raycasting
				<< timings[6] - timings[5] << "\t"     //  rendering
				<< timings[5] - timings[1] << "\t"     //  computation
				<< timings[6] - timings[0] << "\t"     //  total
				<< xt << "\t" << yt << "\t" << zt << "\t"     //  X,Y,Z
				<< tracked <<"        \t" << integrated // tracked and integrated flags
				<< std::endl;

		frame++;

		timings[0] = tock();
	}
	// ==========     DUMP VOLUME      =========

	if (config.dump_volume_file != "") {
	  kfusion.dumpVolume(config.dump_volume_file.c_str());
	}

	//  =========  FREE BASIC BUFFERS  =========

	free(inputDepth);
	free(depthRender);
	free(trackRender);
	free(volumeRender);
	return 0;

}

