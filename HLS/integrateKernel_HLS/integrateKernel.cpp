


#include <kernels.h>
#include <string.h>




void integrateKernel(uint3 size, short2 *vol_data,float3 dim , float *depth,
		int depthSize_x,int depthSize_y ,
		const Matrix4 invTrack, const Matrix4 K, const float mu,
		const float maxweight,int start, int end) {


	#pragma HLS INTERFACE s_axilite port=return bundle=control
	#pragma HLS INTERFACE m_axi port=depth offset=slave bundle=depth
	#pragma HLS INTERFACE m_axi  port=vol_data offset=slave bundle=vol_data max_read_burst_length=256 max_write_burst_length=256
	#pragma HLS INTERFACE s_axilite port=size
	#pragma HLS INTERFACE s_axilite port=dim
	#pragma HLS INTERFACE s_axilite port=depthSize_x
	#pragma HLS INTERFACE s_axilite port=depthSize_y
	#pragma HLS INTERFACE s_axilite port=invTrack
	#pragma HLS INTERFACE s_axilite  port=K
	#pragma HLS INTERFACE s_axilite port=mu
	#pragma HLS INTERFACE s_axilite port=maxweight
	#pragma HLS INTERFACE s_axilite port=start
	#pragma HLS INTERFACE s_axilite port=end


	#pragma HLS DATA_PACK variable=vol_data
	#pragma HLS DATA_PACK variable=size
	#pragma HLS DATA_PACK variable=dim
	#pragma HLS DATA_PACK variable=invTrack
	#pragma HLS DATA_PACK variable=K


	unsigned int y,x,z;

	float depth_hls[depthSize_x * depthSize_y];
	uint idx = 0;
	short2 input_data[size.x];
	#pragma HLS ARRAY_PARTITION variable=input_data cyclic factor=2 dim=1


	float3 pos_pix;
	float3 pos;
	float3 cameraX;
	uint T_idx;

	memcpy(depth_hls, depth, depthSize_x * depthSize_y*sizeof(float));


	for (z = start; z < end; z++) {

		for (y = 0; y < size.y; y++){

			T_idx =  y * size.x + z * size.x * size.y;
			memcpy(input_data, vol_data + T_idx, size.x*sizeof(short2));

			for (x = 0; x < size.x; x++) {

#pragma HLS PIPELINE II=1
#pragma HLS UNROLL factor=2

				pos_pix = make_float3((x + 0.5f) * dim.x / size.x,
						(y + 0.5f) * dim.y / size.y, (z + 0.5f) * dim.z / size.z);
				pos = invTrack * pos_pix;
				cameraX = K * pos;


				if (pos.z < 0.0001f) // some near plane constraint
					continue;
				const float2 pixel = make_float2(cameraX.x / cameraX.z + 0.5f,
						cameraX.y / cameraX.z + 0.5f);

				if (pixel.x < 0 || pixel.x > depthSize_x - 1 || pixel.y < 0
						|| pixel.y > depthSize_y - 1)
					continue;

				const uint2 px = make_uint2(pixel.x, pixel.y);

				idx = px.x + px.y * depthSize_x;

				//memcpy(depth_hls, depth+idx, 1*sizeof(float));


				if (depth_hls[idx] == 0)
					continue;
				const float diff =
						(depth_hls[idx] - cameraX.z)
								* std::sqrt(
										1 + sq(pos.x / pos.z)
												+ sq(pos.y / pos.z));



				if (diff > -mu) {


					const float sdf = fminf(1.f, diff / mu);

					float2 data =make_float2(input_data[x].x* 0.00003051944088f,input_data[x].y);

					data.x = clamp((data.y * data.x + sdf) / (data.y + 1), -1.f,1.f);
					data.y = fminf(data.y + 1, maxweight);


					input_data[x] = make_short2(data.x * 32766.0f,data.y);



				}

			}
			memcpy(vol_data + T_idx,input_data, size.x*sizeof(short2));

		}
	}
}

