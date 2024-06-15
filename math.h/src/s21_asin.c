#include "s21_math.h"

long double s21_asin(double x) {
  long double asin = 0;
  if (x > 1 || x < -1) {
    asin = s21_NAN;
  } else if (x == 1 || x == -1) {
    asin = x * (s21_PI / 2);
  } else {
    long double prev = x;
    asin = x;
    x *= x;
    for (int i = 1; s21_fabs(prev) > s21_EPS; i += 2) {
      prev *= x * i / (i + 1);
      asin += prev / (i + 2);
    }
  }
  return asin;
}