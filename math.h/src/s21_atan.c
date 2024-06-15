#include "s21_math.h"

long double s21_atan(double x) {
  long double atan = 0;
  long double z = -1;

  if (!x) {
    atan = x;
  } else if (s21_is_nan(x)) {
    atan = s21_NAN;
  } else if (s21_is_inf(x)) {
    atan = s21_PI / 2;
    if (x < 0) atan *= -1;
  } else if (x > -1 && x < 1) {
    atan = x;
    for (int i = 1; i <= 200; i += 2) {
      atan += (s21_pow(x, i + 2) * z) / (i + 2);
      z *= -1;
    }
  } else if (x < -1 || x > 1) {
    atan = 1 / x;
    for (int i = 1; i <= 200; i += 2) {
      atan += z / ((i + 2) * s21_pow(x, i + 2));
      z *= -1;
    }

    if (x > 1) {
      atan = (s21_PI / 2) - atan;
    } else if (x < -1) {
      atan = -(s21_PI / 2) - atan;
    }
  } else if (x == -1 || x == 1) {
    atan = s21_PI / 4;
    if (x < 0) atan *= -1;
  }

  return atan;
}
