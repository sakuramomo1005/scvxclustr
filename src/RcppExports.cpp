// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/scvxclustr.h"
#include <RcppEigen.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// admm_eigen
List admm_eigen(Eigen::Map<Eigen::MatrixXd> X, Eigen::Map<Eigen::VectorXd> w, double gamma1, double gamma2, Eigen::Map<Eigen::VectorXd> gamma2_weight, double nu, double tol_abs, double max_iter, double type, Function f);
static SEXP scvxclustr_admm_eigen_try(SEXP XSEXP, SEXP wSEXP, SEXP gamma1SEXP, SEXP gamma2SEXP, SEXP gamma2_weightSEXP, SEXP nuSEXP, SEXP tol_absSEXP, SEXP max_iterSEXP, SEXP typeSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type gamma1(gamma1SEXP);
    Rcpp::traits::input_parameter< double >::type gamma2(gamma2SEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type gamma2_weight(gamma2_weightSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type tol_abs(tol_absSEXP);
    Rcpp::traits::input_parameter< double >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type type(typeSEXP);
    Rcpp::traits::input_parameter< Function >::type f(fSEXP);
    __result = Rcpp::wrap(admm_eigen(X, w, gamma1, gamma2, gamma2_weight, nu, tol_abs, max_iter, type, f));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP scvxclustr_admm_eigen(SEXP XSEXP, SEXP wSEXP, SEXP gamma1SEXP, SEXP gamma2SEXP, SEXP gamma2_weightSEXP, SEXP nuSEXP, SEXP tol_absSEXP, SEXP max_iterSEXP, SEXP typeSEXP, SEXP fSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(scvxclustr_admm_eigen_try(XSEXP, wSEXP, gamma1SEXP, gamma2SEXP, gamma2_weightSEXP, nuSEXP, tol_absSEXP, max_iterSEXP, typeSEXP, fSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// ama_eigen
List ama_eigen(Eigen::Map<Eigen::MatrixXd> X, Eigen::Map<Eigen::VectorXd> w, Eigen::Map<Eigen::MatrixXd> ix, double gamma1, double gamma2, Eigen::Map<Eigen::VectorXd> gamma2_weight, double nu, double tol_abs, double max_iter, double type);
static SEXP scvxclustr_ama_eigen_try(SEXP XSEXP, SEXP wSEXP, SEXP ixSEXP, SEXP gamma1SEXP, SEXP gamma2SEXP, SEXP gamma2_weightSEXP, SEXP nuSEXP, SEXP tol_absSEXP, SEXP max_iterSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type w(wSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type ix(ixSEXP);
    Rcpp::traits::input_parameter< double >::type gamma1(gamma1SEXP);
    Rcpp::traits::input_parameter< double >::type gamma2(gamma2SEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type gamma2_weight(gamma2_weightSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type tol_abs(tol_absSEXP);
    Rcpp::traits::input_parameter< double >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type type(typeSEXP);
    __result = Rcpp::wrap(ama_eigen(X, w, ix, gamma1, gamma2, gamma2_weight, nu, tol_abs, max_iter, type));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP scvxclustr_ama_eigen(SEXP XSEXP, SEXP wSEXP, SEXP ixSEXP, SEXP gamma1SEXP, SEXP gamma2SEXP, SEXP gamma2_weightSEXP, SEXP nuSEXP, SEXP tol_absSEXP, SEXP max_iterSEXP, SEXP typeSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(scvxclustr_ama_eigen_try(XSEXP, wSEXP, ixSEXP, gamma1SEXP, gamma2SEXP, gamma2_weightSEXP, nuSEXP, tol_absSEXP, max_iterSEXP, typeSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}

// validate (ensure exported C++ functions exist before calling them)
static int scvxclustr_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("List(*admm_eigen)(Eigen::Map<Eigen::MatrixXd>,Eigen::Map<Eigen::VectorXd>,double,double,Eigen::Map<Eigen::VectorXd>,double,double,double,double,Function)");
        signatures.insert("List(*ama_eigen)(Eigen::Map<Eigen::MatrixXd>,Eigen::Map<Eigen::VectorXd>,Eigen::Map<Eigen::MatrixXd>,double,double,Eigen::Map<Eigen::VectorXd>,double,double,double,double)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP scvxclustr_RcppExport_registerCCallable() { 
    R_RegisterCCallable("scvxclustr", "scvxclustr_admm_eigen", (DL_FUNC)scvxclustr_admm_eigen_try);
    R_RegisterCCallable("scvxclustr", "scvxclustr_ama_eigen", (DL_FUNC)scvxclustr_ama_eigen_try);
    R_RegisterCCallable("scvxclustr", "scvxclustr_RcppExport_validate", (DL_FUNC)scvxclustr_RcppExport_validate);
    return R_NilValue;
}
