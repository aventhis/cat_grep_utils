#include "s21_math.h"

long double s21_cos(double x)

{
  long int div = (long int)(x / s21_PI);
  x -= (div * s21_PI);
  char sign = 1;
  if (div % 2 != 0) sign = -1;
  long double result = 1.0;
  long double inter = 1.0;
  long double num = x * x;
  for (int i = 1; i <= 800; i++) {
    long double comp = 2.0 * i;
    long double den = comp * (comp - 1.0);
    inter *= num / den;
    if (i % 2 == 0)
      result += inter;
    else
      result -= inter;
  }
  return sign * result;
}

// long double s21_cos(double x) { return s21_sin(x + s21_PI / 2.0); } //
// variant
