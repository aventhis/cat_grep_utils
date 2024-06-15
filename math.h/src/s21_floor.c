#include "s21_math.h"

long double s21_floor(double x) {
  double fraction_part = x - (int)x;
  long double integer_part = (long long int)x;
  if (x >= s21_MAX_LLONG || x <= s21_MIN_LLONG || fraction_part == 0 ||
      s21_is_inf(x) || s21_is_nan(x) || !x || x == s21_MAX_DOUBLE) {
    integer_part = x;
  } else if (x < 0) {
    integer_part -= 1;
  }
  return integer_part;
}