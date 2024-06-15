#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double result = x;
  if (s21_is_inf(x) || s21_is_nan(x) || s21_is_nan(y) || !y) {
    result = s21_NAN;
  } else if (s21_is_inf(y)) {
    result = x;
  } else if (x == 0.0 || x == -0.0) {
    result = 0.0;
  } else if ((x > 0 && y > 0) || (x > 0 && y < 0)) {
    double quo = x / y;
    double intPart = (long)quo;
    result = (long double)(x - intPart * y);
  } else {
    double quo = x / y;
    double intPart = (long)quo;
    result = (long double)(-(x - intPart * y));
  }
  if (x < 0) {
    result = result * -1;
  }
  return result;
}