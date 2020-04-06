#ifndef ARMA_BASE_H
#define ARMA_BASE_H

//#define ARMA_USE_BLAS
//#define ARMA_USE_LAPACK

//#define ARMA_USE_MKL_TYPES


#define ARMA_64BIT_WORD
#define ARMA_BLAS_LONG_LONG

#define ARMA_DONT_USE_WRAPPER
#undef ARMA_BLAS_CAPITALS
#define ARMA_BLAS_UNDERSCORE


#include <armadillo>

using namespace arma;
using namespace std;

#endif

