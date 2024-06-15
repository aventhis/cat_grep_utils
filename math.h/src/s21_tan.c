#include "s21_math.h"

long double s21_tan(double x) {
  double x1 = s21_fmod(x, s21_PI);
  long double tan = s21_sin(x1) / s21_cos(x1);
  return tan;
}
