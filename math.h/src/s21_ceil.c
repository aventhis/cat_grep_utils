#include "s21_math.h"

long double s21_ceil(double x) {
  double fraction_part = x - (int)x;
  int integer_part = (int)x;

  long double res = (long long int)x;

  if (s21_is_inf(x) || s21_is_nan(x) || !x || x == s21_MAX_DOUBLE) {
    res = x;
  } else if (integer_part == 0 && x < 0) {
    res = (x - fraction_part) * -1;
  } else if (fraction_part > 0) {
    res += 1;
  }
  return res;
}