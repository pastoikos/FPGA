
#include <kernels.h>
#include <string.h>

inline
float exp1(float x) {
  x = 1.0 + x / 256.0;
  x *= x; x *= x; x *= x; x *= x;
  x *= x; x *= x; x *= x; x *= x;
  return x;
}

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
	float out_array[320];
	//float pad_depth_array[324*5];
	float pad_depth_array_1[324];
//#pragma HLS ARRAY_PARTITION variable=pad_depth_array_1 complete dim=1
	float pad_depth_array_2[324];
//#pragma HLS ARRAY_PARTITION variable=pad_depth_array_2 complete dim=1
	float pad_depth_array_3[324];
//#pragma HLS ARRAY_PARTITION variable=pad_depth_array_3 complete dim=1
	float pad_depth_array_4[324];
//#pragma HLS ARRAY_PARTITION variable=pad_depth_array_4 complete dim=1
	float pad_depth_array_5[324];
//#pragma HLS ARRAY_PARTITION variable=pad_depth_array_5 complete dim=1

	float gaussian_array[5];
	memcpy(gaussian_array,gaussian ,5*sizeof(float));



	for (y = start; y < end; y++) {
		uint pos = y * size_x;
	//	memcpy(pad_depth_array,pad_depth+(y*depthsize_x),324*5*sizeof(float));

		memcpy(pad_depth_array_1,pad_depth+(y*depthsize_x),324*sizeof(float));
		memcpy(pad_depth_array_2,pad_depth+(y*depthsize_x)+(324*1),324*sizeof(float));
		memcpy(pad_depth_array_3,pad_depth+(y*depthsize_x)+(324*2),324*sizeof(float));
		memcpy(pad_depth_array_4,pad_depth+(y*depthsize_x)+(324*3),324*sizeof(float));
		memcpy(pad_depth_array_5,pad_depth+(y*depthsize_x)+(324*4),324*sizeof(float));

		for (uint x = 0; x < 320; x++) {

#pragma HLS PIPELINE II=1

			/*if (pad_depth_array[x+2+(2*depthsize_x)] == 0) {
					out_array[x] = 0;
					continue;
			}*/

			float sum = 0.0f;
			float t = 0.0f;


			const float center = pad_depth_array_3[x+2];
			//const float center = pad_depth_array[x+2+(2*depthsize_x)];


			for (int i = -2; i <= 2; ++i) {
				//for (int j = -2; j <= 2; ++j) {
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
				//}
			}

			out_array[x] = t / sum;
		}

		memcpy(out+pos, out_array,size_x*sizeof(float));
	}

}
