
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
	int depthsize_x=size_x+4;
	float e_d_squared_2 = e_d * e_d * 2;
	float out_array[320];
	float pad_depth_array[324*5];
	float gaussian_array[5];
    memcpy(gaussian_array,gaussian ,5*sizeof(float));



	for (y = start; y < end; y++) {
		uint pos = y * size_x;
		memcpy(pad_depth_array,pad_depth+(y*depthsize_x),324*5*sizeof(float));

		for (uint x = 0; x < 320; x++) {
#pragma HLS PIPELINE II=1

			if (pad_depth_array[x+2+(2*depthsize_x)] == 0) {
					out_array[x] = 0;
					continue;
			}


			float sum = 0.0f;
			float t = 0.0f;

			const float center = pad_depth_array[x+2+(2*depthsize_x)];


			for (int i = -2; i <= 2; ++i) {
				for (int j = -2; j <= 2; ++j) {
					uint2 curPos = make_uint2(x + i+2,j+2);
					const float curPix = pad_depth_array[curPos.x+curPos.y*depthsize_x];
					if (curPix > 0) {
						const float mod = sq(curPix - center);
						const float factor = gaussian_array[i+r]
								* gaussian_array[j+r]
								*expf(-mod / e_d_squared_2);
						t += factor * curPix;
						sum += factor;

					}
				}
			}

			out_array[x] = t / sum;
		}

		memcpy(out+pos, out_array,size_x*sizeof(float));
	}

}
