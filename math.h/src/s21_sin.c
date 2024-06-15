#include "s21_math.h"

long double s21_sin(double x) {
  int sign = (x < 0) ? -1 : 1;
  x = s21_fmod(s21_fabs(x), 2 * s21_PI);

  double prev = x;
  double sin = x;
  for (int i = 3; s21_fabs(prev) > s21_EPS; i += 2) {
    sin += prev = -prev * x / (i - 1) * x / i;
  }

  return sin * sign;
}

// long double s21_sin(double x) { return s21_cos(x + s21_PI / 2.0); } //
// variant
