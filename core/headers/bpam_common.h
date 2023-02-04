#ifndef _BPAM_COMMON_HEADER_
#define _BPAM_COMMON_HEADER_

#include <omp.h>

#ifdef R_INTERFACE
#include <RcppArmadillo.h>
#else
#include <armadillo>
#endif

#ifdef FLOAT_DOUBLE
typedef double bpam_float;
typedef arma::mat arma_mat;
typedef arma::rowvec arma_rowvec;
typedef arma::vec arma_vec;
#else
typedef float bpam_float;
typedef arma::fmat arma_mat;
typedef arma::frowvec arma_rowvec;
typedef arma::fvec arma_vec;
#endif

#endif
