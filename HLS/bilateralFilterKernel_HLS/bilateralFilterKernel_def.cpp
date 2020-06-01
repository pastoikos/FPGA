#include <kernels.h>
#include <string.h>

inline
float exp1(float x) {
  x = 1.0 + x / 256.0;
  x *= x; x *= x; x *= x; x *= x;
  x *= x; x *= x; x *= x; x *= x;
  return x;
}

void bilateralFilterKernel(float* out, float* in, uint size_x,uint size_y,
		const float * gaussian, float e_d, int r,int start,int end) {


	#pragma HLS INTERFACE s_axilite port=return bundle=control
	#pragma HLS INTERFACE m_axi port=out offset=slave bundle=out max_read_burst_length=256 max_write_burst_length=256
	#pragma HLS INTERFACE m_axi port=in offset=slave bundle=in max_read_burst_length=256 max_write_burst_length=256
	#pragma HLS INTERFACE m_axi port=gaussian offset=slave bundle=gaussian
	#pragma HLS INTERFACE s_axilite port=size_x
	#pragma HLS INTERFACE s_axilite port=size_y
	#pragma HLS INTERFACE s_axilite port=e_d
	#pragma HLS INTERFACE s_axilite port=r
	#pragma HLS INTERFACE s_axilite port=start
	#pragma HLS INTERFACE s_axilite port=end



	  uint y;
	  float e_d_squared_2 = e_d * e_d * 2;   
	  float  in_array[1];
	  float out_array[1];
	  float gaussian_array[2];
	  //float gaussian_array_j[1];
		for (y = 0; y < size_y; y++) {
			for (uint x = 0; x < size_x; x++) {
				uint pos = x + y * size_x;
				memcpy(in_array, in+pos,1*sizeof(float));
				if (in_array[0] == 0) {
					out_array[0] = 0;
					memcpy(out+pos, out_array,1*sizeof(float));
					continue;
				}

				float sum = 0.0f;
				float t = 0.0f;

				memcpy(in_array, in+pos,1*sizeof(float));
				const float center = in_array[0];

				for (int i = -r; i <= r; ++i) {
					for (int j = -r; j <= r; ++j) {
						uint2 curPos = make_uint2(clamp(x + i, 0u, size_x - 1),
								clamp(y + j, 0u, size_y - 1));
						memcpy(in_array, in+curPos.x + curPos.y * size_x,1*sizeof(float));
						const float curPix = in_array[0];
						if (curPix > 0) {
							const float mod = sq(curPix - center);
							memcpy(gaussian_array,gaussian + i + r,1*sizeof(float));
							memcpy(gaussian_array+1,gaussian + j + r,1*sizeof(float));
							const float factor = gaussian_array[0]
									* gaussian_array[1]
									* expf(-mod / e_d_squared_2);
							t += factor * curPix;
							sum += factor;
						}
					}
				}

				out_array[0] = t / sum;
				memcpy(out+pos, out_array,1*sizeof(float));
			}
		}
}