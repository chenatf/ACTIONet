#ifndef ACTIONet_H
#define ACTIONet_H

#include <stdio.h>
#include <vector>
#include <string>
#include <cmath>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <limits.h>
#include <errno.h>
#include <sys/stat.h>
#include <getopt.h>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <unordered_map>
#include <ctime>

#include <arma_base.h>
#include <my_utils.h>

struct ReducedKernel {
	mat S_r;
	mat V;
	vec lambda;
	vec exp_var;
};


struct SPA_results {
	uvec selected_columns;
	vec column_norms;
};


struct ACTION_results {
	vector<uvec> selected_cols;
	vector<mat> H;
	vector<mat> C;
};


namespace ACTIONet {
	// Basic (randomized) SVD algorithms
	field<mat> FengSVD(sp_mat &A, int dim, int iters, int seed);
	field<mat> FengSVD(mat &A, int dim, int iters, int seed);
	
	field<mat> HalkoSVD(mat &A, int dim, int max_it, int seed);		
	field<mat> HalkoSVD(sp_mat &A, int dim, int max_it, int seed);		
	
	// Entry-points to compute a reduced kernel matrix
	ReducedKernel ACTION_reduction(sp_mat &A, int dim, int iter, int seed, int SVD_algorithm);
	ReducedKernel ACTION_reduction(mat &A, int dim, int iter, int seed, int SVD_algorithm);
	
}

#endif
