#include "test_main.h"

START_TEST(s21_pow_nan) {
  double num = NAN;
  double exp = 12.88;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_nan2) {
  double num = NAN;
  double exp = -12.88;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_nan_nan) {
  double num = NAN;
  double exp = NAN;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_nan_mnan) {
  double num = NAN;
  double exp = -NAN;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_nan_inf) {
  double num = NAN;
  double exp = INFINITY;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_nan_minus_inf) {
  double num = NAN;
  double exp = -INFINITY;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_nan_zero) {
  double num = NAN;
  double exp = 0.00;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_nan_one) {
  double num = NAN;
  double exp = 1.00;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_nan_mone) {
  double num = NAN;
  double exp = -1.00;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mnan1) {
  double num = -NAN;
  double exp = 12.00;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mnan2) {
  double num = -NAN;
  double exp = 5.00;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mnan3) {
  double num = -NAN;
  double exp = 12.88;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mnan4) {
  double num = -NAN;
  double exp = -12.00;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mnan5) {
  double num = -NAN;
  double exp = -5.00;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mnan6) {
  double num = -NAN;
  double exp = -12.88;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mnan_nan) {
  double num = -NAN;
  double exp = NAN;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mnan_mnan) {
  double num = -NAN;
  double exp = -NAN;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mnan_inf) {
  double num = -NAN;
  double exp = INFINITY;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mnan_minus_inf) {
  double num = -NAN;
  double exp = -INFINITY;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mnan_zero) {
  double num = -NAN;
  double exp = 0.00;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mnan_one) {
  double num = -NAN;
  double exp = 1.00;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mnan_mone) {
  double num = -NAN;
  double exp = -1.00;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_inf) {
  double num = INFINITY;
  double exp = 0.5;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_inf2) {
  double num = INFINITY;
  double exp = -0.5;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_inf_inf) {
  double num = INFINITY;
  double exp = INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_inf_minf) {
  double num = INFINITY;
  double exp = -INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_inf_nan) {
  double num = INFINITY;
  double exp = NAN;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_inf_mnan) {
  double num = INFINITY;
  double exp = -NAN;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_inf_zero) {
  double num = INFINITY;
  double exp = 0.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_inf_one) {
  double num = INFINITY;
  double exp = 1.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_infinite(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_inf_mone) {
  double num = INFINITY;
  double exp = -1.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_minf) {
  double num = -INFINITY;
  double exp = 4.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_minf2) {
  double num = -INFINITY;
  double exp = 1.66;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_minf3) {
  double num = -INFINITY;
  double exp = 3.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_minf4) {
  double num = -INFINITY;
  double exp = -4.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_minf5) {
  double num = -INFINITY;
  double exp = -1.66;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_minf_inf) {
  double num = -INFINITY;
  double exp = INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_infinite(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_minf_minf) {
  double num = -INFINITY;
  double exp = -INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_minf_nan) {
  double num = -INFINITY;
  double exp = NAN;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_minf_mnan) {
  double num = -INFINITY;
  double exp = -NAN;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_minf_zero) {
  double num = -INFINITY;
  double exp = 0.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_minf_one) {
  double num = -INFINITY;
  double exp = 1.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_infinite(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_minf_mone) {
  double num = -INFINITY;
  double exp = -1.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_zero) {
  double num = 0.00;
  double exp = 2.88;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_zero_minus) {
  double num = 0.00;
  double exp = -2.88;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_zero_nan) {
  double num = 0.00;
  double exp = NAN;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_zero_mnan) {
  double num = 0.00;
  double exp = -NAN;
  ck_assert_int_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_zero_inf) {
  double num = 0.00;
  double exp = INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_zero_minf) {
  double num = 0.00;
  double exp = -INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_zero_zero) {
  double num = 0.00;
  double exp = 0.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_zero_one) {
  double num = 0.00;
  double exp = 1.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_zero_mone) {
  double num = 0.00;
  double exp = -1.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_one) {
  double num = 1.00;
  double exp = 2.88;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_one_minus) {
  double num = 1.00;
  double exp = -2.88;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_one_nan) {
  double num = 1.00;
  double exp = NAN;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_one_mnan) {
  double num = 1.00;
  double exp = -NAN;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_one_inf) {
  double num = 1.00;
  double exp = INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_one_minf) {
  double num = 1.00;
  double exp = -INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_one_zero) {
  double num = 1.00;
  double exp = 0.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_one_one) {
  double num = 1.00;
  double exp = 1.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_one_mone) {
  double num = 1.00;
  double exp = -1.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mone1) {
  double num = -1.00;
  double exp = 4.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mone2) {
  double num = -1.00;
  double exp = 4.88;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mone3) {
  double num = -1.00;
  double exp = 5.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mone4) {
  double num = -1.00;
  double exp = -4.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mone5) {
  double num = -1.00;
  double exp = -4.88;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mone6) {
  double num = -1.00;
  double exp = -5.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mone_nan) {
  double num = -1.00;
  double exp = NAN;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mone_mnan) {
  double num = -1.00;
  double exp = -NAN;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mone_inf) {
  double num = -1.00;
  double exp = INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mone_minf) {
  double num = -1.00;
  double exp = -INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mone_zero) {
  double num = -1.00;
  double exp = 0.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mone_one) {
  double num = -1.00;
  double exp = 1.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_mone_mone) {
  double num = -1.00;
  double exp = -1.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_double) {
  double num = -3.14169;
  double exp = 8;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_double2) {
  double num = -3.14169;
  double exp = 8.88;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_double3) {
  double num = -3.14169;
  double exp = -8;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_double4) {
  double num = -3.14169;
  double exp = -7;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_double5) {
  double num = -3.14169;
  double exp = -7.88;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_double6) {
  double num = -0.5;
  double exp = -6;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_double_nan) {
  double num = -3.14169;
  double exp = NAN;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_double_mnan) {
  double num = -3.14169;
  double exp = -NAN;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_double_inf1) {
  double num = -3.14169;
  double exp = INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_infinite(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_double_inf2) {
  double num = -0.14169;
  double exp = INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_double_minf1) {
  double num = -3.14169;
  double exp = -INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_double_minf2) {
  double num = -0.14169;
  double exp = -INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_double_zero) {
  double num = -3.14169;
  double exp = 0.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_double_one) {
  double num = -3.14169;
  double exp = 1.00;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_double_mone) {
  double num = -3.14169;
  double exp = -1.00;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_first_less) {
  double num = 3.22;
  double exp = 16.66;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_science) {
  double num = 1;
  double exp = 20;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_pos_double) {
  double num = 3.14169;
  double exp = 8;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_pos_double2) {
  double num = 3.14169;
  double exp = 8.88;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_pos_double3) {
  double num = 0.14169;
  double exp = 8;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_pos_double4) {
  double num = 0.14169;
  double exp = 8.88;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_pos_double5) {
  double num = 3.14169;
  double exp = -2;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_pos_double6) {
  double num = 3.14169;
  double exp = -7.88;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_pos_double7) {
  double num = 0.14169;
  double exp = -6;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_pos_double_nan) {
  double num = 3.14169;
  double exp = NAN;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_pos_double_mnan) {
  double num = 3.14169;
  double exp = -NAN;
  ck_assert_ldouble_nan(s21_pow(num, exp));
  ck_assert_ldouble_nan(pow(num, exp));
}
END_TEST

START_TEST(s21_pow_pos_double_inf1) {
  double num = 3.14169;
  double exp = INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
  ck_assert_ldouble_infinite(s21_pow(num, exp));
}
END_TEST

START_TEST(s21_pow_pos_double_inf2) {
  double num = 0.14169;
  double exp = INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_pos_double_minf1) {
  double num = 3.14169;
  double exp = -INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_pos_double_minf2) {
  double num = 0.14169;
  double exp = -INFINITY;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_pos_double_zero) {
  double num = 3.14169;
  double exp = 0.00;
  ck_assert_ldouble_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(s21_pow_pos_double_one) {
  double num = 3.14169;
  double exp = 1.00;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_pow_pos_double_mone) {
  double num = 3.14169;
  double exp = -1.00;
  ck_assert_ldouble_eq_tol(s21_pow(num, exp), pow(num, exp), 1e-6);
}
END_TEST

Suite *test_pow(void) {
  Suite *s;
  TCase *tc_s21_pow;
  s = suite_create("\033[45m-=s21_POW=-\033[0m");
  tc_s21_pow = tcase_create("s21_pow");
  tcase_add_test(tc_s21_pow, s21_pow_nan);
  tcase_add_test(tc_s21_pow, s21_pow_nan2);
  tcase_add_test(tc_s21_pow, s21_pow_nan_nan);
  tcase_add_test(tc_s21_pow, s21_pow_nan_mnan);
  tcase_add_test(tc_s21_pow, s21_pow_nan_inf);
  tcase_add_test(tc_s21_pow, s21_pow_nan_minus_inf);
  tcase_add_test(tc_s21_pow, s21_pow_nan_zero);
  tcase_add_test(tc_s21_pow, s21_pow_nan_one);
  tcase_add_test(tc_s21_pow, s21_pow_nan_mone);
  tcase_add_test(tc_s21_pow, s21_pow_mnan1);
  tcase_add_test(tc_s21_pow, s21_pow_mnan2);
  tcase_add_test(tc_s21_pow, s21_pow_mnan3);
  tcase_add_test(tc_s21_pow, s21_pow_mnan4);
  tcase_add_test(tc_s21_pow, s21_pow_mnan5);
  tcase_add_test(tc_s21_pow, s21_pow_mnan6);
  tcase_add_test(tc_s21_pow, s21_pow_mnan_nan);
  tcase_add_test(tc_s21_pow, s21_pow_mnan_mnan);
  tcase_add_test(tc_s21_pow, s21_pow_mnan_inf);
  tcase_add_test(tc_s21_pow, s21_pow_mnan_minus_inf);
  tcase_add_test(tc_s21_pow, s21_pow_mnan_zero);
  tcase_add_test(tc_s21_pow, s21_pow_mnan_one);
  tcase_add_test(tc_s21_pow, s21_pow_mnan_mone);
  tcase_add_test(tc_s21_pow, s21_pow_inf);
  tcase_add_test(tc_s21_pow, s21_pow_inf2);
  tcase_add_test(tc_s21_pow, s21_pow_inf_inf);
  tcase_add_test(tc_s21_pow, s21_pow_inf_minf);
  tcase_add_test(tc_s21_pow, s21_pow_inf_nan);
  tcase_add_test(tc_s21_pow, s21_pow_inf_mnan);
  tcase_add_test(tc_s21_pow, s21_pow_inf_zero);
  tcase_add_test(tc_s21_pow, s21_pow_inf_one);
  tcase_add_test(tc_s21_pow, s21_pow_inf_mone);
  tcase_add_test(tc_s21_pow, s21_pow_minf);
  tcase_add_test(tc_s21_pow, s21_pow_minf2);
  tcase_add_test(tc_s21_pow, s21_pow_minf3);
  tcase_add_test(tc_s21_pow, s21_pow_minf4);
  tcase_add_test(tc_s21_pow, s21_pow_minf5);
  tcase_add_test(tc_s21_pow, s21_pow_minf_inf);
  tcase_add_test(tc_s21_pow, s21_pow_minf_minf);
  tcase_add_test(tc_s21_pow, s21_pow_minf_nan);
  tcase_add_test(tc_s21_pow, s21_pow_minf_mnan);
  tcase_add_test(tc_s21_pow, s21_pow_minf_zero);
  tcase_add_test(tc_s21_pow, s21_pow_minf_one);
  tcase_add_test(tc_s21_pow, s21_pow_minf_mone);
  tcase_add_test(tc_s21_pow, s21_pow_zero);
  tcase_add_test(tc_s21_pow, s21_pow_zero_minus);
  tcase_add_test(tc_s21_pow, s21_pow_zero_nan);
  tcase_add_test(tc_s21_pow, s21_pow_zero_mnan);
  tcase_add_test(tc_s21_pow, s21_pow_zero_inf);
  tcase_add_test(tc_s21_pow, s21_pow_zero_minf);
  tcase_add_test(tc_s21_pow, s21_pow_zero_zero);
  tcase_add_test(tc_s21_pow, s21_pow_zero_one);
  tcase_add_test(tc_s21_pow, s21_pow_zero_mone);
  tcase_add_test(tc_s21_pow, s21_pow_one);
  tcase_add_test(tc_s21_pow, s21_pow_one_minus);
  tcase_add_test(tc_s21_pow, s21_pow_one_nan);
  tcase_add_test(tc_s21_pow, s21_pow_one_mnan);
  tcase_add_test(tc_s21_pow, s21_pow_one_inf);
  tcase_add_test(tc_s21_pow, s21_pow_one_minf);
  tcase_add_test(tc_s21_pow, s21_pow_one_zero);
  tcase_add_test(tc_s21_pow, s21_pow_one_one);
  tcase_add_test(tc_s21_pow, s21_pow_one_mone);
  tcase_add_test(tc_s21_pow, s21_pow_mone1);
  tcase_add_test(tc_s21_pow, s21_pow_mone2);
  tcase_add_test(tc_s21_pow, s21_pow_mone3);
  tcase_add_test(tc_s21_pow, s21_pow_mone4);
  tcase_add_test(tc_s21_pow, s21_pow_mone5);
  tcase_add_test(tc_s21_pow, s21_pow_mone6);
  tcase_add_test(tc_s21_pow, s21_pow_mone_nan);
  tcase_add_test(tc_s21_pow, s21_pow_mone_mnan);
  tcase_add_test(tc_s21_pow, s21_pow_mone_inf);
  tcase_add_test(tc_s21_pow, s21_pow_mone_minf);
  tcase_add_test(tc_s21_pow, s21_pow_mone_zero);
  tcase_add_test(tc_s21_pow, s21_pow_mone_one);
  tcase_add_test(tc_s21_pow, s21_pow_mone_mone);
  tcase_add_test(tc_s21_pow, s21_pow_double);
  tcase_add_test(tc_s21_pow, s21_pow_double2);
  tcase_add_test(tc_s21_pow, s21_pow_double3);
  tcase_add_test(tc_s21_pow, s21_pow_double4);
  tcase_add_test(tc_s21_pow, s21_pow_double5);
  tcase_add_test(tc_s21_pow, s21_pow_double6);
  tcase_add_test(tc_s21_pow, s21_pow_double_nan);
  tcase_add_test(tc_s21_pow, s21_pow_double_mnan);
  tcase_add_test(tc_s21_pow, s21_pow_double_inf1);
  tcase_add_test(tc_s21_pow, s21_pow_double_inf2);
  tcase_add_test(tc_s21_pow, s21_pow_double_minf1);
  tcase_add_test(tc_s21_pow, s21_pow_double_minf2);
  tcase_add_test(tc_s21_pow, s21_pow_double_zero);
  tcase_add_test(tc_s21_pow, s21_pow_double_one);
  tcase_add_test(tc_s21_pow, s21_pow_double_mone);
  tcase_add_test(tc_s21_pow, s21_pow_first_less);
  tcase_add_test(tc_s21_pow, s21_pow_science);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double2);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double3);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double4);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double5);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double6);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double7);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double_nan);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double_mnan);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double_inf1);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double_inf2);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double_minf1);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double_minf2);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double_zero);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double_one);
  tcase_add_test(tc_s21_pow, s21_pow_pos_double_mone);
  suite_add_tcase(s, tc_s21_pow);
  return s;
}
