#include "s21_math.h"

long double s21_sqrt(double x) {
  long double res = s21_NAN;
  if ((x == -s21_INF && x < 0)) {
    res = s21_NAN;
  } else if (x > 0 && s21_is_inf(x)) {
    res = s21_INF;
  } else if (!x) {
    res = x;
  } else
    res = s21_pow(x, 0.5);
  return res;
}
