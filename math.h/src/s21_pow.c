#include "s21_math.h"

long double s21_short_pow(double base, double exp) {
  long double num = 1.0;
  if (exp > 0) {
    while (exp > 0) {
      num *= base;
      exp--;
    }
  } else {
    while (exp < 0) {
      num /= base;
      exp++;
    }
  }
  return num;
}

long double s21_pow(double base, double exp) {
  long double num = 0.0;
  if ((base == 1 || base == -1) && (exp == -s21_INF || exp == s21_INF)) {
    num = 1;
  } else if (!exp) {
    num = 1;
  } else {
    if ((long long int)exp == exp) {
      num = s21_short_pow(base, exp);
    } else {
      num = s21_exp(exp * s21_log(s21_fabs(base)));
    }

    if (num != num && s21_fabs(base) == 1) num = 1;
    if (base < 0 && (exp != (int)exp) && num > 0 &&
        (num != s21_INF && num != -s21_INF)) {
      num = s21_NAN;
    }
    if (num > s21_MAX_DOUBLE) {
      num = s21_INF;
    }
  }
  return num;
}
