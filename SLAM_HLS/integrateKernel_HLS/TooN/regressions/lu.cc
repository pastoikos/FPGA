#include "regressions/regression.h"


template<int C>
void test(const Matrix<10, 10>& m)
{
	LU<C> lu(m);
	cout << setprecision(10) << lu.get_inverse() << endl
	     << lu.get_inverse() * m << endl;

}

int main()
{
	Matrix<10> m = Data(
			0.34797399, 0.99949284, 0.79089508, 0.77106323, 0.42008832, 0.34115353, 0.82386306, 0.30355494, 0.43675765, 0.14701409,
			0.79196638, 0.89361322, 0.01607914, 0.80605940, 0.65770431, 0.78196315, 0.72096826, 0.72992854, 0.59231807, 0.29441620,
			0.87756469, 0.13676905, 0.24987969, 0.70330337, 0.14679752, 0.24212448, 0.54797729, 0.39780385, 0.28859592, 0.56037868,
			0.28673516, 0.50161131, 0.68057626, 0.49395349, 0.40353230, 0.87453874, 0.40320916, 0.81494509, 0.08367898, 0.30109605,
			0.63965121, 0.81584239, 0.41207698, 0.62649440, 0.17279511, 0.20152095, 0.68882719, 0.25012805, 0.59680722, 0.08332985,
			0.28651408, 0.79504551, 0.33326702, 0.26440896, 0.95748781, 0.22512739, 0.01047784, 0.85470217, 0.85677470, 0.65734012,
			0.59521552, 0.78840112, 0.96281698, 0.31079097, 0.31028381, 0.10117889, 0.87224212, 0.29233044, 0.63348397, 0.45734703,
			0.76090196, 0.19765961, 0.34467370, 0.13664008, 0.03025330, 0.04633244, 0.85239184, 0.51009616, 0.29205931, 0.01302757,
			0.74295611, 0.33527418, 0.62969038, 0.50725507, 0.64402412, 0.89390381, 0.59720718, 0.74400470, 0.98612919, 0.53410648,
			0.93191033, 0.22050625, 0.78088493, 0.06762009, 0.56923140, 0.24980766, 0.74376115, 0.14729345, 0.02183219, 0.42504135);

	test<Dynamic>(m);
	test<10>(m);
}
