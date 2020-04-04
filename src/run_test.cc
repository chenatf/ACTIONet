#include <ACTIONet.h>

using namespace ACTIONet;

int main(int argc, char ** argv) {
	

	mat A = sampleUnif(100, 1000, 0.0, 1.0, 0);
	
	field<mat> out = FengSVD(A, 10, 5, 0);

	//out(0).print("U");
	
	ReducedKernel red_out = reduce(A, 30, 5, 0, ACTIONRED_ALG, HALKO_ALG);
	
	mat S_r = red_out.S_r;
	printf("S_r: %d x %d\n", S_r.n_rows, S_r.n_cols);
	
	
	ACTION_results action_out = run_ACTION_dev(S_r, 2, 30, 1, true);
	
	return 0;
}
