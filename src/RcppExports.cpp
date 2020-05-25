// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/ACTIONet.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// set_seed
void set_seed(double seed);
RcppExport SEXP _ACTIONet_set_seed(SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type seed(seedSEXP);
    set_seed(seed);
    return R_NilValue;
END_RCPP
}
// FengSVD
List FengSVD(sp_mat& A, int dim, int iters, int seed);
RcppExport SEXP _ACTIONet_FengSVD(SEXP ASEXP, SEXP dimSEXP, SEXP itersSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(FengSVD(A, dim, iters, seed));
    return rcpp_result_gen;
END_RCPP
}
// FengSVD_full
List FengSVD_full(mat& A, int dim, int iters, int seed);
RcppExport SEXP _ACTIONet_FengSVD_full(SEXP ASEXP, SEXP dimSEXP, SEXP itersSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(FengSVD_full(A, dim, iters, seed));
    return rcpp_result_gen;
END_RCPP
}
// HalkoSVD
List HalkoSVD(sp_mat& A, int dim, int iters, int seed);
RcppExport SEXP _ACTIONet_HalkoSVD(SEXP ASEXP, SEXP dimSEXP, SEXP itersSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(HalkoSVD(A, dim, iters, seed));
    return rcpp_result_gen;
END_RCPP
}
// HalkoSVD_full
List HalkoSVD_full(mat& A, int dim, int iters, int seed);
RcppExport SEXP _ACTIONet_HalkoSVD_full(SEXP ASEXP, SEXP dimSEXP, SEXP itersSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(HalkoSVD_full(A, dim, iters, seed));
    return rcpp_result_gen;
END_RCPP
}
// reduce_kernel
List reduce_kernel(sp_mat& S, int reduced_dim, int iter, int seed, int reduction_algorithm, int SVD_algorithm);
RcppExport SEXP _ACTIONet_reduce_kernel(SEXP SSEXP, SEXP reduced_dimSEXP, SEXP iterSEXP, SEXP seedSEXP, SEXP reduction_algorithmSEXP, SEXP SVD_algorithmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< int >::type reduced_dim(reduced_dimSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type reduction_algorithm(reduction_algorithmSEXP);
    Rcpp::traits::input_parameter< int >::type SVD_algorithm(SVD_algorithmSEXP);
    rcpp_result_gen = Rcpp::wrap(reduce_kernel(S, reduced_dim, iter, seed, reduction_algorithm, SVD_algorithm));
    return rcpp_result_gen;
END_RCPP
}
// reduce_kernel_full
List reduce_kernel_full(mat& S, int reduced_dim, int iter, int seed, int reduction_algorithm, int SVD_algorithm);
RcppExport SEXP _ACTIONet_reduce_kernel_full(SEXP SSEXP, SEXP reduced_dimSEXP, SEXP iterSEXP, SEXP seedSEXP, SEXP reduction_algorithmSEXP, SEXP SVD_algorithmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< int >::type reduced_dim(reduced_dimSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type reduction_algorithm(reduction_algorithmSEXP);
    Rcpp::traits::input_parameter< int >::type SVD_algorithm(SVD_algorithmSEXP);
    rcpp_result_gen = Rcpp::wrap(reduce_kernel_full(S, reduced_dim, iter, seed, reduction_algorithm, SVD_algorithm));
    return rcpp_result_gen;
END_RCPP
}
// run_simplex_regression
mat run_simplex_regression(mat& A, mat& B);
RcppExport SEXP _ACTIONet_run_simplex_regression(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< mat& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(run_simplex_regression(A, B));
    return rcpp_result_gen;
END_RCPP
}
// run_SPA
List run_SPA(mat A, int k);
RcppExport SEXP _ACTIONet_run_SPA(SEXP ASEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(run_SPA(A, k));
    return rcpp_result_gen;
END_RCPP
}
// run_ACTION
List run_ACTION(mat& S_r, int k_min, int k_max, int thread_no, int max_it, double min_delta);
RcppExport SEXP _ACTIONet_run_ACTION(SEXP S_rSEXP, SEXP k_minSEXP, SEXP k_maxSEXP, SEXP thread_noSEXP, SEXP max_itSEXP, SEXP min_deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type S_r(S_rSEXP);
    Rcpp::traits::input_parameter< int >::type k_min(k_minSEXP);
    Rcpp::traits::input_parameter< int >::type k_max(k_maxSEXP);
    Rcpp::traits::input_parameter< int >::type thread_no(thread_noSEXP);
    Rcpp::traits::input_parameter< int >::type max_it(max_itSEXP);
    Rcpp::traits::input_parameter< double >::type min_delta(min_deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(run_ACTION(S_r, k_min, k_max, thread_no, max_it, min_delta));
    return rcpp_result_gen;
END_RCPP
}
// run_online_ACTION
List run_online_ACTION(mat& S_r, field<uvec> samples, int k_min, int k_max, int thread_no);
RcppExport SEXP _ACTIONet_run_online_ACTION(SEXP S_rSEXP, SEXP samplesSEXP, SEXP k_minSEXP, SEXP k_maxSEXP, SEXP thread_noSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type S_r(S_rSEXP);
    Rcpp::traits::input_parameter< field<uvec> >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< int >::type k_min(k_minSEXP);
    Rcpp::traits::input_parameter< int >::type k_max(k_maxSEXP);
    Rcpp::traits::input_parameter< int >::type thread_no(thread_noSEXP);
    rcpp_result_gen = Rcpp::wrap(run_online_ACTION(S_r, samples, k_min, k_max, thread_no));
    return rcpp_result_gen;
END_RCPP
}
// run_weighted_ACTION
List run_weighted_ACTION(mat& S_r, vec w, int k_min, int k_max, int thread_no, int max_it, double min_delta);
RcppExport SEXP _ACTIONet_run_weighted_ACTION(SEXP S_rSEXP, SEXP wSEXP, SEXP k_minSEXP, SEXP k_maxSEXP, SEXP thread_noSEXP, SEXP max_itSEXP, SEXP min_deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type S_r(S_rSEXP);
    Rcpp::traits::input_parameter< vec >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type k_min(k_minSEXP);
    Rcpp::traits::input_parameter< int >::type k_max(k_maxSEXP);
    Rcpp::traits::input_parameter< int >::type thread_no(thread_noSEXP);
    Rcpp::traits::input_parameter< int >::type max_it(max_itSEXP);
    Rcpp::traits::input_parameter< double >::type min_delta(min_deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(run_weighted_ACTION(S_r, w, k_min, k_max, thread_no, max_it, min_delta));
    return rcpp_result_gen;
END_RCPP
}
// prune_archetypes
List prune_archetypes(const List& C_trace, const List& H_trace, double min_specificity_z_threshold, int min_cells);
RcppExport SEXP _ACTIONet_prune_archetypes(SEXP C_traceSEXP, SEXP H_traceSEXP, SEXP min_specificity_z_thresholdSEXP, SEXP min_cellsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type C_trace(C_traceSEXP);
    Rcpp::traits::input_parameter< const List& >::type H_trace(H_traceSEXP);
    Rcpp::traits::input_parameter< double >::type min_specificity_z_threshold(min_specificity_z_thresholdSEXP);
    Rcpp::traits::input_parameter< int >::type min_cells(min_cellsSEXP);
    rcpp_result_gen = Rcpp::wrap(prune_archetypes(C_trace, H_trace, min_specificity_z_threshold, min_cells));
    return rcpp_result_gen;
END_RCPP
}
// unify_archetypes
List unify_archetypes(mat& S_r, mat& C_stacked, mat& H_stacked, double min_overlap, double resolution);
RcppExport SEXP _ACTIONet_unify_archetypes(SEXP S_rSEXP, SEXP C_stackedSEXP, SEXP H_stackedSEXP, SEXP min_overlapSEXP, SEXP resolutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type S_r(S_rSEXP);
    Rcpp::traits::input_parameter< mat& >::type C_stacked(C_stackedSEXP);
    Rcpp::traits::input_parameter< mat& >::type H_stacked(H_stackedSEXP);
    Rcpp::traits::input_parameter< double >::type min_overlap(min_overlapSEXP);
    Rcpp::traits::input_parameter< double >::type resolution(resolutionSEXP);
    rcpp_result_gen = Rcpp::wrap(unify_archetypes(S_r, C_stacked, H_stacked, min_overlap, resolution));
    return rcpp_result_gen;
END_RCPP
}
// build_ACTIONet
sp_mat build_ACTIONet(mat H_stacked, double density, int thread_no, bool mutual_edges_only);
RcppExport SEXP _ACTIONet_build_ACTIONet(SEXP H_stackedSEXP, SEXP densitySEXP, SEXP thread_noSEXP, SEXP mutual_edges_onlySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat >::type H_stacked(H_stackedSEXP);
    Rcpp::traits::input_parameter< double >::type density(densitySEXP);
    Rcpp::traits::input_parameter< int >::type thread_no(thread_noSEXP);
    Rcpp::traits::input_parameter< bool >::type mutual_edges_only(mutual_edges_onlySEXP);
    rcpp_result_gen = Rcpp::wrap(build_ACTIONet(H_stacked, density, thread_no, mutual_edges_only));
    return rcpp_result_gen;
END_RCPP
}
// layout_ACTIONet
List layout_ACTIONet(sp_mat& G, mat S_r, int compactness_level, unsigned int n_epochs, int thread_no);
RcppExport SEXP _ACTIONet_layout_ACTIONet(SEXP GSEXP, SEXP S_rSEXP, SEXP compactness_levelSEXP, SEXP n_epochsSEXP, SEXP thread_noSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat& >::type G(GSEXP);
    Rcpp::traits::input_parameter< mat >::type S_r(S_rSEXP);
    Rcpp::traits::input_parameter< int >::type compactness_level(compactness_levelSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_epochs(n_epochsSEXP);
    Rcpp::traits::input_parameter< int >::type thread_no(thread_noSEXP);
    rcpp_result_gen = Rcpp::wrap(layout_ACTIONet(G, S_r, compactness_level, n_epochs, thread_no));
    return rcpp_result_gen;
END_RCPP
}
// encode_ids
vector<string> encode_ids(vector<string> ids, string pass);
RcppExport SEXP _ACTIONet_encode_ids(SEXP idsSEXP, SEXP passSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< vector<string> >::type ids(idsSEXP);
    Rcpp::traits::input_parameter< string >::type pass(passSEXP);
    rcpp_result_gen = Rcpp::wrap(encode_ids(ids, pass));
    return rcpp_result_gen;
END_RCPP
}
// decode_ids
vector<string> decode_ids(vector<string> encoded_ids, string pass);
RcppExport SEXP _ACTIONet_decode_ids(SEXP encoded_idsSEXP, SEXP passSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< vector<string> >::type encoded_ids(encoded_idsSEXP);
    Rcpp::traits::input_parameter< string >::type pass(passSEXP);
    rcpp_result_gen = Rcpp::wrap(decode_ids(encoded_ids, pass));
    return rcpp_result_gen;
END_RCPP
}
// compute_pseudo_bulk
mat compute_pseudo_bulk(sp_mat& S, arma::Col<unsigned long long> sample_assignments);
RcppExport SEXP _ACTIONet_compute_pseudo_bulk(SEXP SSEXP, SEXP sample_assignmentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< arma::Col<unsigned long long> >::type sample_assignments(sample_assignmentsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_pseudo_bulk(S, sample_assignments));
    return rcpp_result_gen;
END_RCPP
}
// compute_pseudo_bulk_full
mat compute_pseudo_bulk_full(mat& S, arma::Col<unsigned long long> sample_assignments);
RcppExport SEXP _ACTIONet_compute_pseudo_bulk_full(SEXP SSEXP, SEXP sample_assignmentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< arma::Col<unsigned long long> >::type sample_assignments(sample_assignmentsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_pseudo_bulk_full(S, sample_assignments));
    return rcpp_result_gen;
END_RCPP
}
// compute_pseudo_bulk_per_ind
field<mat> compute_pseudo_bulk_per_ind(sp_mat& S, arma::Col<unsigned long long> sample_assignments, arma::Col<unsigned long long> individuals);
RcppExport SEXP _ACTIONet_compute_pseudo_bulk_per_ind(SEXP SSEXP, SEXP sample_assignmentsSEXP, SEXP individualsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< arma::Col<unsigned long long> >::type sample_assignments(sample_assignmentsSEXP);
    Rcpp::traits::input_parameter< arma::Col<unsigned long long> >::type individuals(individualsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_pseudo_bulk_per_ind(S, sample_assignments, individuals));
    return rcpp_result_gen;
END_RCPP
}
// compute_pseudo_bulk_per_ind_full
field<mat> compute_pseudo_bulk_per_ind_full(mat& S, arma::Col<unsigned long long> sample_assignments, arma::Col<unsigned long long> individuals);
RcppExport SEXP _ACTIONet_compute_pseudo_bulk_per_ind_full(SEXP SSEXP, SEXP sample_assignmentsSEXP, SEXP individualsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< arma::Col<unsigned long long> >::type sample_assignments(sample_assignmentsSEXP);
    Rcpp::traits::input_parameter< arma::Col<unsigned long long> >::type individuals(individualsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_pseudo_bulk_per_ind_full(S, sample_assignments, individuals));
    return rcpp_result_gen;
END_RCPP
}
// renormalize_input_matrix
sp_mat renormalize_input_matrix(sp_mat& S, arma::Col<unsigned long long> sample_assignments);
RcppExport SEXP _ACTIONet_renormalize_input_matrix(SEXP SSEXP, SEXP sample_assignmentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< arma::Col<unsigned long long> >::type sample_assignments(sample_assignmentsSEXP);
    rcpp_result_gen = Rcpp::wrap(renormalize_input_matrix(S, sample_assignments));
    return rcpp_result_gen;
END_RCPP
}
// renormalize_input_matrix_full
mat renormalize_input_matrix_full(mat& S, arma::Col<unsigned long long> sample_assignments);
RcppExport SEXP _ACTIONet_renormalize_input_matrix_full(SEXP SSEXP, SEXP sample_assignmentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< arma::Col<unsigned long long> >::type sample_assignments(sample_assignmentsSEXP);
    rcpp_result_gen = Rcpp::wrap(renormalize_input_matrix_full(S, sample_assignments));
    return rcpp_result_gen;
END_RCPP
}
// compute_archetype_feature_specificity
List compute_archetype_feature_specificity(sp_mat& S, mat& H);
RcppExport SEXP _ACTIONet_compute_archetype_feature_specificity(SEXP SSEXP, SEXP HSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< mat& >::type H(HSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_archetype_feature_specificity(S, H));
    return rcpp_result_gen;
END_RCPP
}
// compute_archetype_feature_specificity_full
List compute_archetype_feature_specificity_full(mat& S, mat& H);
RcppExport SEXP _ACTIONet_compute_archetype_feature_specificity_full(SEXP SSEXP, SEXP HSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< mat& >::type H(HSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_archetype_feature_specificity_full(S, H));
    return rcpp_result_gen;
END_RCPP
}
// compute_cluster_feature_specificity
List compute_cluster_feature_specificity(sp_mat& S, uvec sample_assignments);
RcppExport SEXP _ACTIONet_compute_cluster_feature_specificity(SEXP SSEXP, SEXP sample_assignmentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< uvec >::type sample_assignments(sample_assignmentsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_cluster_feature_specificity(S, sample_assignments));
    return rcpp_result_gen;
END_RCPP
}
// compute_cluster_feature_specificity_full
List compute_cluster_feature_specificity_full(mat& S, uvec sample_assignments);
RcppExport SEXP _ACTIONet_compute_cluster_feature_specificity_full(SEXP SSEXP, SEXP sample_assignmentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< uvec >::type sample_assignments(sample_assignmentsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_cluster_feature_specificity_full(S, sample_assignments));
    return rcpp_result_gen;
END_RCPP
}
// compute_core_number
uvec compute_core_number(sp_mat& G);
RcppExport SEXP _ACTIONet_compute_core_number(SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat& >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_core_number(G));
    return rcpp_result_gen;
END_RCPP
}
// compute_archetype_core_centrality
vec compute_archetype_core_centrality(sp_mat& G, uvec sample_assignments);
RcppExport SEXP _ACTIONet_compute_archetype_core_centrality(SEXP GSEXP, SEXP sample_assignmentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat& >::type G(GSEXP);
    Rcpp::traits::input_parameter< uvec >::type sample_assignments(sample_assignmentsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_archetype_core_centrality(G, sample_assignments));
    return rcpp_result_gen;
END_RCPP
}
// compute_network_diffusion
mat compute_network_diffusion(sp_mat& G, sp_mat& X0, int thread_no, double alpha, int max_it);
RcppExport SEXP _ACTIONet_compute_network_diffusion(SEXP GSEXP, SEXP X0SEXP, SEXP thread_noSEXP, SEXP alphaSEXP, SEXP max_itSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat& >::type G(GSEXP);
    Rcpp::traits::input_parameter< sp_mat& >::type X0(X0SEXP);
    Rcpp::traits::input_parameter< int >::type thread_no(thread_noSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type max_it(max_itSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_network_diffusion(G, X0, thread_no, alpha, max_it));
    return rcpp_result_gen;
END_RCPP
}
// compute_sparse_network_diffusion
sp_mat compute_sparse_network_diffusion(sp_mat& G, sp_mat& X0, double alpha, double rho, double epsilon, int max_iter);
RcppExport SEXP _ACTIONet_compute_sparse_network_diffusion(SEXP GSEXP, SEXP X0SEXP, SEXP alphaSEXP, SEXP rhoSEXP, SEXP epsilonSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat& >::type G(GSEXP);
    Rcpp::traits::input_parameter< sp_mat& >::type X0(X0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_sparse_network_diffusion(G, X0, alpha, rho, epsilon, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// assess_enrichment
mat assess_enrichment(mat& scores, mat& associations, int L);
RcppExport SEXP _ACTIONet_assess_enrichment(SEXP scoresSEXP, SEXP associationsSEXP, SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< mat& >::type associations(associationsSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(assess_enrichment(scores, associations, L));
    return rcpp_result_gen;
END_RCPP
}
// NetDBSCAN
vec NetDBSCAN(SEXP G, int minPts, double eps, double alpha);
RcppExport SEXP _ACTIONet_NetDBSCAN(SEXP GSEXP, SEXP minPtsSEXP, SEXP epsSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type G(GSEXP);
    Rcpp::traits::input_parameter< int >::type minPts(minPtsSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(NetDBSCAN(G, minPts, eps, alpha));
    return rcpp_result_gen;
END_RCPP
}
// run_HDBSCAN
List run_HDBSCAN(mat& X, int minPoints, int minClusterSize);
RcppExport SEXP _ACTIONet_run_HDBSCAN(SEXP XSEXP, SEXP minPointsSEXP, SEXP minClusterSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type minPoints(minPointsSEXP);
    Rcpp::traits::input_parameter< int >::type minClusterSize(minClusterSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(run_HDBSCAN(X, minPoints, minClusterSize));
    return rcpp_result_gen;
END_RCPP
}
// MWM_hungarian
mat MWM_hungarian(mat& G);
RcppExport SEXP _ACTIONet_MWM_hungarian(SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(MWM_hungarian(G));
    return rcpp_result_gen;
END_RCPP
}
// signed_cluster
vec signed_cluster(sp_mat A, double resolution_parameter, Nullable<IntegerVector> initial_clusters_, int seed);
RcppExport SEXP _ACTIONet_signed_cluster(SEXP ASEXP, SEXP resolution_parameterSEXP, SEXP initial_clusters_SEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type resolution_parameter(resolution_parameterSEXP);
    Rcpp::traits::input_parameter< Nullable<IntegerVector> >::type initial_clusters_(initial_clusters_SEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(signed_cluster(A, resolution_parameter, initial_clusters_, seed));
    return rcpp_result_gen;
END_RCPP
}
// unsigned_cluster
vec unsigned_cluster(sp_mat A, double resolution_parameter, Nullable<IntegerVector> initial_clusters_, int seed);
RcppExport SEXP _ACTIONet_unsigned_cluster(SEXP ASEXP, SEXP resolution_parameterSEXP, SEXP initial_clusters_SEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type resolution_parameter(resolution_parameterSEXP);
    Rcpp::traits::input_parameter< Nullable<IntegerVector> >::type initial_clusters_(initial_clusters_SEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(unsigned_cluster(A, resolution_parameter, initial_clusters_, seed));
    return rcpp_result_gen;
END_RCPP
}
// Prune_PageRank
mat Prune_PageRank(mat& U, double density);
RcppExport SEXP _ACTIONet_Prune_PageRank(SEXP USEXP, SEXP densitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< double >::type density(densitySEXP);
    rcpp_result_gen = Rcpp::wrap(Prune_PageRank(U, density));
    return rcpp_result_gen;
END_RCPP
}
// transform_layout
List transform_layout(sp_mat& W, mat coor2D, mat coor3D, mat colRGB, int compactness_level, unsigned int n_epochs, int thread_no);
RcppExport SEXP _ACTIONet_transform_layout(SEXP WSEXP, SEXP coor2DSEXP, SEXP coor3DSEXP, SEXP colRGBSEXP, SEXP compactness_levelSEXP, SEXP n_epochsSEXP, SEXP thread_noSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat& >::type W(WSEXP);
    Rcpp::traits::input_parameter< mat >::type coor2D(coor2DSEXP);
    Rcpp::traits::input_parameter< mat >::type coor3D(coor3DSEXP);
    Rcpp::traits::input_parameter< mat >::type colRGB(colRGBSEXP);
    Rcpp::traits::input_parameter< int >::type compactness_level(compactness_levelSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_epochs(n_epochsSEXP);
    Rcpp::traits::input_parameter< int >::type thread_no(thread_noSEXP);
    rcpp_result_gen = Rcpp::wrap(transform_layout(W, coor2D, coor3D, colRGB, compactness_level, n_epochs, thread_no));
    return rcpp_result_gen;
END_RCPP
}
// sgd2_layout_weighted
mat sgd2_layout_weighted(sp_mat& G, mat S_r, int t_max, double eps, int seed);
RcppExport SEXP _ACTIONet_sgd2_layout_weighted(SEXP GSEXP, SEXP S_rSEXP, SEXP t_maxSEXP, SEXP epsSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< sp_mat& >::type G(GSEXP);
    Rcpp::traits::input_parameter< mat >::type S_r(S_rSEXP);
    Rcpp::traits::input_parameter< int >::type t_max(t_maxSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(sgd2_layout_weighted(G, S_r, t_max, eps, seed));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ACTIONet_set_seed", (DL_FUNC) &_ACTIONet_set_seed, 1},
    {"_ACTIONet_FengSVD", (DL_FUNC) &_ACTIONet_FengSVD, 4},
    {"_ACTIONet_FengSVD_full", (DL_FUNC) &_ACTIONet_FengSVD_full, 4},
    {"_ACTIONet_HalkoSVD", (DL_FUNC) &_ACTIONet_HalkoSVD, 4},
    {"_ACTIONet_HalkoSVD_full", (DL_FUNC) &_ACTIONet_HalkoSVD_full, 4},
    {"_ACTIONet_reduce_kernel", (DL_FUNC) &_ACTIONet_reduce_kernel, 6},
    {"_ACTIONet_reduce_kernel_full", (DL_FUNC) &_ACTIONet_reduce_kernel_full, 6},
    {"_ACTIONet_run_simplex_regression", (DL_FUNC) &_ACTIONet_run_simplex_regression, 2},
    {"_ACTIONet_run_SPA", (DL_FUNC) &_ACTIONet_run_SPA, 2},
    {"_ACTIONet_run_ACTION", (DL_FUNC) &_ACTIONet_run_ACTION, 6},
    {"_ACTIONet_run_online_ACTION", (DL_FUNC) &_ACTIONet_run_online_ACTION, 5},
    {"_ACTIONet_run_weighted_ACTION", (DL_FUNC) &_ACTIONet_run_weighted_ACTION, 7},
    {"_ACTIONet_prune_archetypes", (DL_FUNC) &_ACTIONet_prune_archetypes, 4},
    {"_ACTIONet_unify_archetypes", (DL_FUNC) &_ACTIONet_unify_archetypes, 5},
    {"_ACTIONet_build_ACTIONet", (DL_FUNC) &_ACTIONet_build_ACTIONet, 4},
    {"_ACTIONet_layout_ACTIONet", (DL_FUNC) &_ACTIONet_layout_ACTIONet, 5},
    {"_ACTIONet_encode_ids", (DL_FUNC) &_ACTIONet_encode_ids, 2},
    {"_ACTIONet_decode_ids", (DL_FUNC) &_ACTIONet_decode_ids, 2},
    {"_ACTIONet_compute_pseudo_bulk", (DL_FUNC) &_ACTIONet_compute_pseudo_bulk, 2},
    {"_ACTIONet_compute_pseudo_bulk_full", (DL_FUNC) &_ACTIONet_compute_pseudo_bulk_full, 2},
    {"_ACTIONet_compute_pseudo_bulk_per_ind", (DL_FUNC) &_ACTIONet_compute_pseudo_bulk_per_ind, 3},
    {"_ACTIONet_compute_pseudo_bulk_per_ind_full", (DL_FUNC) &_ACTIONet_compute_pseudo_bulk_per_ind_full, 3},
    {"_ACTIONet_renormalize_input_matrix", (DL_FUNC) &_ACTIONet_renormalize_input_matrix, 2},
    {"_ACTIONet_renormalize_input_matrix_full", (DL_FUNC) &_ACTIONet_renormalize_input_matrix_full, 2},
    {"_ACTIONet_compute_archetype_feature_specificity", (DL_FUNC) &_ACTIONet_compute_archetype_feature_specificity, 2},
    {"_ACTIONet_compute_archetype_feature_specificity_full", (DL_FUNC) &_ACTIONet_compute_archetype_feature_specificity_full, 2},
    {"_ACTIONet_compute_cluster_feature_specificity", (DL_FUNC) &_ACTIONet_compute_cluster_feature_specificity, 2},
    {"_ACTIONet_compute_cluster_feature_specificity_full", (DL_FUNC) &_ACTIONet_compute_cluster_feature_specificity_full, 2},
    {"_ACTIONet_compute_core_number", (DL_FUNC) &_ACTIONet_compute_core_number, 1},
    {"_ACTIONet_compute_archetype_core_centrality", (DL_FUNC) &_ACTIONet_compute_archetype_core_centrality, 2},
    {"_ACTIONet_compute_network_diffusion", (DL_FUNC) &_ACTIONet_compute_network_diffusion, 5},
    {"_ACTIONet_compute_sparse_network_diffusion", (DL_FUNC) &_ACTIONet_compute_sparse_network_diffusion, 6},
    {"_ACTIONet_assess_enrichment", (DL_FUNC) &_ACTIONet_assess_enrichment, 3},
    {"_ACTIONet_NetDBSCAN", (DL_FUNC) &_ACTIONet_NetDBSCAN, 4},
    {"_ACTIONet_run_HDBSCAN", (DL_FUNC) &_ACTIONet_run_HDBSCAN, 3},
    {"_ACTIONet_MWM_hungarian", (DL_FUNC) &_ACTIONet_MWM_hungarian, 1},
    {"_ACTIONet_signed_cluster", (DL_FUNC) &_ACTIONet_signed_cluster, 4},
    {"_ACTIONet_unsigned_cluster", (DL_FUNC) &_ACTIONet_unsigned_cluster, 4},
    {"_ACTIONet_Prune_PageRank", (DL_FUNC) &_ACTIONet_Prune_PageRank, 2},
    {"_ACTIONet_transform_layout", (DL_FUNC) &_ACTIONet_transform_layout, 7},
    {"_ACTIONet_sgd2_layout_weighted", (DL_FUNC) &_ACTIONet_sgd2_layout_weighted, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_ACTIONet(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
