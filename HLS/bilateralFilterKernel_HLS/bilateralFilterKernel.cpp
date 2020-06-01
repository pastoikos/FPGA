
#include <kernels.h>
#include <string.h>



void bilateralFilterKernel(float* out, float* pad_depth, uint size_x,uint size_y,
		const float * gaussian, float e_d, int r,int start,int end) {


	#pragma HLS INTERFACE s_axilite port=return bundle=control
	#pragma HLS INTERFACE m_axi port=out offset=slave bundle=out max_read_burst_length=256 max_write_burst_length=256
	#pragma HLS INTERFACE m_axi port=pad_depth offset=slave bundle=pad_depth max_read_burst_length=256 max_write_burst_length=256
	#pragma HLS INTERFACE m_axi port=gaussian offset=slave bundle=gaussian
	#pragma HLS INTERFACE s_axilite port=size_x
	#pragma HLS INTERFACE s_axilite port=size_y
	#pragma HLS INTERFACE s_axilite port=e_d
	#pragma HLS INTERFACE s_axilite port=r
	#pragma HLS INTERFACE s_axilite port=start
	#pragma HLS INTERFACE s_axilite port=end

	uint y;
	int depthsize_x=size_x+4; //324
	float e_d_squared_2 = e_d * e_d * 2;
	float out_array[size_x];
	float pad_depth_array_1[depthsize_x];
	float pad_depth_array_2[depthsize_x];
	float pad_depth_array_3[depthsize_x];
	float pad_depth_array_4[depthsize_x];
	float pad_depth_array_5[depthsize_x];

	float gaussian_array[5]; /* radius * 2 + 1 , const radius = 2 */
	memcpy(gaussian_array,gaussian ,5*sizeof(float));



	for (y = start; y < end; y++) {
		uint pos = y * size_x;

		memcpy(pad_depth_array_1,pad_depth+(y*depthsize_x),depthsize_x*sizeof(float));
		memcpy(pad_depth_array_2,pad_depth+(y*depthsize_x)+(depthsize_x*1),depthsize_x*sizeof(float));
		memcpy(pad_depth_array_3,pad_depth+(y*depthsize_x)+(depthsize_x*2),depthsize_x*sizeof(float));
		memcpy(pad_depth_array_4,pad_depth+(y*depthsize_x)+(depthsize_x*3),depthsize_x*sizeof(float));
		memcpy(pad_depth_array_5,pad_depth+(y*depthsize_x)+(depthsize_x*4),depthsize_x*sizeof(float));

		for (uint x = 0; x < size_x; x++) {

#pragma HLS PIPELINE II=1

		

			float sum = 0.0f;
			float t = 0.0f;


			const float center = pad_depth_array_3[x+2];


			for (int i = -r; i <= r; ++i) {

					uint2 curPos = make_uint2(x + i+2,0);
					float curPix = pad_depth_array_1[curPos.x];

					if (curPix > 0) {
						 float mod = sq(curPix - center);
						 float factor = gaussian_array[i+r]
								* gaussian_array[0]
								*expf(-mod / e_d_squared_2);
						t += factor * curPix;
						sum += factor;

					}
					 curPos = make_uint2(x + i+2,1);
					 curPix = pad_depth_array_2[curPos.x];

					if (curPix > 0) {
						 float mod = sq(curPix - center);
						 float factor = gaussian_array[i+r]
								* gaussian_array[1]
								*expf(-mod / e_d_squared_2);
						t += factor * curPix;
						sum += factor;

					}
					 curPos = make_uint2(x + i+2,2);
					 curPix = pad_depth_array_3[curPos.x];

					if (curPix > 0) {
						 float mod = sq(curPix - center);
						 float factor = gaussian_array[i+r]
								* gaussian_array[2]
								*expf(-mod / e_d_squared_2);
						t += factor * curPix;
						sum += factor;

					}
					curPos = make_uint2(x + i+2,3);
					curPix = pad_depth_array_4[curPos.x];

					if (curPix > 0) {
						 float mod = sq(curPix - center);
						 float factor = gaussian_array[i+r]
								* gaussian_array[3]
								*expf(-mod / e_d_squared_2);
						t += factor * curPix;
						sum += factor;

					}
					 curPos = make_uint2(x + i+2,4);
					 curPix = pad_depth_array_5[curPos.x];

					if (curPix > 0) {
						 float mod = sq(curPix - center);
						 float factor = gaussian_array[i+r]
								* gaussian_array[4]
								*expf(-mod / e_d_squared_2);
						t += factor * curPix;
						sum += factor;

					}
				
			}

			out_array[x] = t / sum;
		}

		memcpy(out+pos, out_array,size_x*sizeof(float));
	}

}
