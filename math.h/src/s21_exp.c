#include "s21_math.h"

long double s21_exp(double x) {
  long double result = 0;
  if (s21_is_nan(x)) {
    result = s21_NAN;
  } else if (s21_is_inf(x)) {
    result = x < 0 ? 0 : s21_INF;
  }
  long double taylor_series_element = 1.;

  long double denom = 0.;
  size_t i = 0;
  long double fx = s21_fabs(x);
  while (i < 10000000 &&
         !(s21_is_inf(x) || s21_is_inf(result) || s21_is_nan(result)) &&
         taylor_series_element > s21_EPS) {
    result += taylor_series_element;
    i++;
    denom++;
    taylor_series_element *= fx / denom;
  }
  if (!s21_is_inf(x)) {
    result += taylor_series_element;
  }
  if (x < 0 && result != 0) {
    result = 1. / result;
  }
  if (result >= s21_MAX_DOUBLE) {
    result = s21_INF;
  }
  return result;
}
