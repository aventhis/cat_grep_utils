#include "s21_math.h"

long double s21_log(double x) {
  long double res = 0;
  if (x != x || x < 0 || x == -s21_INF) {
    res = s21_NAN;
  } else if (!x) {
    res = -s21_INF;
  } else if (x == s21_INF) {
    res = s21_INF;
  } else {
    int e_step = 0;
    for (; x >= s21_EXP; e_step++) {
      x = x / s21_EXP;
    }
    for (int i = 0; i < 400; i++) {
      res += 2 * ((x - s21_exp(res)) / (x + s21_exp(res)));
    }
    res = res + e_step;
  }
  return res;
}