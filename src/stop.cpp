#include <Rcpp.h>

//' Test stop function
//'
//' Test stop function
//'
//' @export
//[[Rcpp::export]]
Rcpp::NumericVector dostop()
{
  Rcpp::stop("foo");
  Rcpp::NumericVector x(1);

  return x;
}
