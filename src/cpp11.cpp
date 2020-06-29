// Generated by cpp11: do not edit by hand

#include "vdiffr_types.h"
#include <cpp11/R.hpp>
#include <Rcpp.h>
using namespace Rcpp;
#include "cpp11/declarations.hpp"

// compare.cpp
bool compare_files(std::string expected, std::string test);
extern "C" SEXP _vdiffr_compare_files(SEXP expected, SEXP test) {
  BEGIN_CPP11
    return cpp11::as_sexp(compare_files(cpp11::unmove(cpp11::as_cpp<std::string>(expected)), cpp11::unmove(cpp11::as_cpp<std::string>(test))));
  END_CPP11
}
// devSVG.cpp
bool svglite_(std::string file, std::string bg, double width, double height, double pointsize, bool standalone, Rcpp::List aliases);
extern "C" SEXP _vdiffr_svglite_(SEXP file, SEXP bg, SEXP width, SEXP height, SEXP pointsize, SEXP standalone, SEXP aliases) {
  BEGIN_CPP11
    return cpp11::as_sexp(svglite_(cpp11::unmove(cpp11::as_cpp<std::string>(file)), cpp11::unmove(cpp11::as_cpp<std::string>(bg)), cpp11::unmove(cpp11::as_cpp<double>(width)), cpp11::unmove(cpp11::as_cpp<double>(height)), cpp11::unmove(cpp11::as_cpp<double>(pointsize)), cpp11::unmove(cpp11::as_cpp<bool>(standalone)), cpp11::unmove(cpp11::as_cpp<Rcpp::List>(aliases))));
  END_CPP11
}
// devSVG.cpp
cpp11::external_pointer<std::stringstream> svgstring_(Rcpp::Environment env, std::string bg, double width, double height, double pointsize, bool standalone, Rcpp::List aliases);
extern "C" SEXP _vdiffr_svgstring_(SEXP env, SEXP bg, SEXP width, SEXP height, SEXP pointsize, SEXP standalone, SEXP aliases) {
  BEGIN_CPP11
    return cpp11::as_sexp(svgstring_(cpp11::unmove(cpp11::as_cpp<Rcpp::Environment>(env)), cpp11::unmove(cpp11::as_cpp<std::string>(bg)), cpp11::unmove(cpp11::as_cpp<double>(width)), cpp11::unmove(cpp11::as_cpp<double>(height)), cpp11::unmove(cpp11::as_cpp<double>(pointsize)), cpp11::unmove(cpp11::as_cpp<bool>(standalone)), cpp11::unmove(cpp11::as_cpp<Rcpp::List>(aliases))));
  END_CPP11
}
// devSVG.cpp
std::string get_svg_content(cpp11::external_pointer<std::stringstream> p);
extern "C" SEXP _vdiffr_get_svg_content(SEXP p) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_svg_content(cpp11::unmove(cpp11::as_cpp<cpp11::external_pointer<std::stringstream>>(p))));
  END_CPP11
}
// utils.cpp
SEXP library_load();
extern "C" SEXP _vdiffr_library_load() {
  BEGIN_CPP11
    return cpp11::as_sexp(library_load());
  END_CPP11
}
// utils.cpp
SEXP test_string_width(SEXP string, SEXP font_size, SEXP font_file);
extern "C" SEXP _vdiffr_test_string_width(SEXP string, SEXP font_size, SEXP font_file) {
  BEGIN_CPP11
    return cpp11::as_sexp(test_string_width(cpp11::unmove(cpp11::as_cpp<SEXP>(string)), cpp11::unmove(cpp11::as_cpp<SEXP>(font_size)), cpp11::unmove(cpp11::as_cpp<SEXP>(font_file))));
  END_CPP11
}
// utils.cpp
SEXP test_string_info(SEXP string, SEXP font_size, SEXP font_file);
extern "C" SEXP _vdiffr_test_string_info(SEXP string, SEXP font_size, SEXP font_file) {
  BEGIN_CPP11
    return cpp11::as_sexp(test_string_info(cpp11::unmove(cpp11::as_cpp<SEXP>(string)), cpp11::unmove(cpp11::as_cpp<SEXP>(font_size)), cpp11::unmove(cpp11::as_cpp<SEXP>(font_file))));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _vdiffr_compare_files(SEXP, SEXP);
extern SEXP _vdiffr_get_svg_content(SEXP);
extern SEXP _vdiffr_library_load();
extern SEXP _vdiffr_svglite_(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _vdiffr_svgstring_(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _vdiffr_test_string_info(SEXP, SEXP, SEXP);
extern SEXP _vdiffr_test_string_width(SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_vdiffr_compare_files",     (DL_FUNC) &_vdiffr_compare_files,     2},
    {"_vdiffr_get_svg_content",   (DL_FUNC) &_vdiffr_get_svg_content,   1},
    {"_vdiffr_library_load",      (DL_FUNC) &_vdiffr_library_load,      0},
    {"_vdiffr_svglite_",          (DL_FUNC) &_vdiffr_svglite_,          7},
    {"_vdiffr_svgstring_",        (DL_FUNC) &_vdiffr_svgstring_,        7},
    {"_vdiffr_test_string_info",  (DL_FUNC) &_vdiffr_test_string_info,  3},
    {"_vdiffr_test_string_width", (DL_FUNC) &_vdiffr_test_string_width, 3},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_vdiffr(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
