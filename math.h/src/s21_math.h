#ifndef S21_MATH_H_
#define S21_MATH_H_

#include <stdlib.h>

#define s21_PI 3.14159265358979323846  // 20 знаков
#define s21_MAX_DOUBLE 1.79769313486231571e+308
#define s21_MAX_LLONG 9223372036854775807LL
#define s21_MIN_LLONG (-s21_MAX_LLONG - 1LL)
#define s21_EPS 1e-17
#define s21_INF 1.0 / 0.0
#define s21_NAN 0.0 / 0.0
#define s21_EXP 2.71828182845904523536
#define s21_is_inf(x) (x == s21_INF || x == -s21_INF)
#define s21_is_nan(x) (x != x)
#define s21_DBL_MIN 2.2250738585072014e-308

int s21_abs(int x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_ceil(double x);
long double s21_pow(double base, double exp);
long double s21_sqrt(double x);
long double s21_exp(double x);
long double s21_log(double x);

long double s21_cos(double x);
long double s21_sin(double x);
long double s21_tan(double x);

long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);

#endif  // S21_MATH_H_
