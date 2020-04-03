#include "ACTIONet.h"

#define HalkoSVD 1
#define FengSVD 2

namespace ACTIONet {
	ReducedKernel ACTION_reduction(sp_mat &A, int dim, int iter = 5, int seed = 0, int SVD_algorithm = HalkoSVD) {			
		int n = A.n_rows;
		A = normalise(A, 2);    

		printf("\tComputing reduced ACTION kernel. Input matrix size: %d x %d\n", A.n_rows, A.n_cols); fflush(stdout);
		
		// Update 1: Orthogonalize columns w.r.t. background (mean)
		vec mu = vec(mean(A, 1));
		vec v = mu / norm(mu, 2);
		vec a1 = v;
		vec b1 = -trans(A)*v;
		
		// Update 2: Center columns of orthogonalized matrix before performing SVD
		vec c = vec(trans(mean(A, 0)));
		double a1_mean = mean(a1);
		vec a2 = ones(A.n_rows);
		vec b2 = -(a1_mean*b1 + c);

		mat A = join_rows(a1, a2);
		mat B = join_rows(b1, b2);
		
		printf("\tPerform SVD on the original matrix\n"); fflush(stdout);
		switch(SVD_algorithm) {
			case HalkoSVD:
				field<mat> SVD_results = HalkoSVD(A, dim, iter, seed);				
				break;
			case HalkoSVD:
				field<mat> SVD_results = FengSVD(A, dim, iter, seed);				
				break;
			default:
				fprintf(stderr, "Unknown SVD algorithm chosen (%d). Switching to Halko.\n")
				field<mat> SVD_results = HalkoSVD(A, dim, iter, seed);				
				break;
		}

		mat U = SVD_results(0);
		vec s = SVD_results(1);
		mat V = SVD_results(2);
		
		printf("\tUpdate SVD ..."); fflush(stdout);
		vec s_prime;
		mat U_prime, V_prime;
			
		mat M = U.t()*A; 
		mat A_ortho_proj = A - U*M;   
		mat P = A_ortho_proj;// = orth(A_ortho_proj);
		my_orth(P);		
		mat R_P = P.t()*A_ortho_proj;
		
		
		mat N = V.t()*B; 
		mat B_ortho_proj = B - V*N; 
		mat Q = B_ortho_proj; //orth(B_ortho_proj); 
		my_orth(Q);
		mat R_Q = Q.t()*B_ortho_proj;	
		
		mat K1 = zeros(s.n_elem+A.n_cols, s.n_elem+A.n_cols);
		for(int i = 0; i < s.n_elem; i++) {
			K1(i, i) = s(i);
		}

		mat K2 = join_vert(M, R_P)*trans(join_vert(N, R_Q));

		
		mat K = K1 + K2;

		svd( U_prime, s_prime, V_prime, K );
		
		mat U_updated = join_horiz(U, P)*U_prime;
		mat V_updated = join_horiz(V, Q)*V_prime;
		printf("done.\n"); fflush(stdout);
		
		
		ReducedKernel projection;		
		projection.S_r = trans(V_updated.cols(0, dim-1));
		for(int i = 0; i < dim; i++) {
			projection.S_r.row(i) *= s_prime(i);
		}
		projection.V = U_updated.cols(0, dim-1);	
		
		vec sigma_sq = square(s_prime);

		projection.lambda = sigma_sq / (n-1);

		vec explained_var = cumsum(sigma_sq) / sum(sigma_sq);
		projection.exp_var = explained_var(span(0, dim-1));
		
		return projection;	
	}

	ReducedKernel ACTION_reduction(mat &A, int dim, int iter = 5, int seed = 0, int SVD_algorithm = HalkoSVD) {			
		int n = A.n_rows;
		A = normalise(A, 2);    

		printf("\tComputing reduced ACTION kernel. Input matrix size: %d x %d\n", A.n_rows, A.n_cols); fflush(stdout);
		
		// Update 1: Orthogonalize columns w.r.t. background (mean)
		vec mu = vec(mean(A, 1));
		vec v = mu / norm(mu, 2);
		vec a1 = v;
		vec b1 = -trans(A)*v;
		
		// Update 2: Center columns of orthogonalized matrix before performing SVD
		vec c = vec(trans(mean(A, 0)));
		double a1_mean = mean(a1);
		vec a2 = ones(A.n_rows);
		vec b2 = -(a1_mean*b1 + c);

		mat A = join_rows(a1, a2);
		mat B = join_rows(b1, b2);
		
		printf("\tPerform SVD on the original matrix\n"); fflush(stdout);
		switch(SVD_algorithm) {
			case HalkoSVD:
				field<mat> SVD_results = HalkoSVD(A, dim, iter, seed);				
				break;
			case HalkoSVD:
				field<mat> SVD_results = FengSVD(A, dim, iter, seed);				
				break;
			default:
				fprintf(stderr, "Unknown SVD algorithm chosen (%d). Switching to Halko.\n")
				field<mat> SVD_results = HalkoSVD(A, dim, iter, seed);				
				break;
		}

		mat U = SVD_results(0);
		vec s = SVD_results(1);
		mat V = SVD_results(2);
		
		printf("\tUpdate SVD ..."); fflush(stdout);
		vec s_prime;
		mat U_prime, V_prime;
			
		mat M = U.t()*A; 
		mat A_ortho_proj = A - U*M;   
		mat P = A_ortho_proj;// = orth(A_ortho_proj);
		my_orth(P);		
		mat R_P = P.t()*A_ortho_proj;
		
		
		mat N = V.t()*B; 
		mat B_ortho_proj = B - V*N; 
		mat Q = B_ortho_proj; //orth(B_ortho_proj); 
		my_orth(Q);
		mat R_Q = Q.t()*B_ortho_proj;	
		
		mat K1 = zeros(s.n_elem+A.n_cols, s.n_elem+A.n_cols);
		for(int i = 0; i < s.n_elem; i++) {
			K1(i, i) = s(i);
		}

		mat K2 = join_vert(M, R_P)*trans(join_vert(N, R_Q));

		
		mat K = K1 + K2;

		svd( U_prime, s_prime, V_prime, K );
		
		mat U_updated = join_horiz(U, P)*U_prime;
		mat V_updated = join_horiz(V, Q)*V_prime;
		printf("done.\n"); fflush(stdout);
		
		
		ReducedKernel projection;		
		projection.S_r = trans(V_updated.cols(0, dim-1));
		for(int i = 0; i < dim; i++) {
			projection.S_r.row(i) *= s_prime(i);
		}
		projection.V = U_updated.cols(0, dim-1);	
		
		vec sigma_sq = square(s_prime);

		projection.lambda = sigma_sq / (n-1);

		vec explained_var = cumsum(sigma_sq) / sum(sigma_sq);
		projection.exp_var = explained_var(span(0, dim-1));
		
		return projection;	
	}
}
