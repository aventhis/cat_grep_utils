#include "test_main.h"

START_TEST(test_exp_1) {
  ck_assert_double_eq_tol(s21_exp(10.1), exp(10.1), 0.000001);
}
END_TEST

START_TEST(test_exp_2) {
  ck_assert_double_eq_tol(s21_exp(10.9), exp(10.9), 0.000001);
}
END_TEST

START_TEST(test_exp_3) {
  ck_assert_double_eq_tol(s21_exp(10.0), exp(10.0), 0.000001);
}
END_TEST

START_TEST(test_exp_4) {
  ck_assert_double_eq_tol(s21_exp(-10.9), exp(-10.9), 0.000001);
}
END_TEST

START_TEST(test_exp_8) {
  ck_assert_double_eq_tol(s21_exp(-0.0), exp(-0.0), 0.000001);
}
END_TEST

START_TEST(test_exp_9) {
  ck_assert_double_eq_tol(s21_exp(0.0), exp(0.0), 0.000001);
}
END_TEST

START_TEST(test_exp_10) {
  ck_assert_double_eq(s21_exp(INFINITY), exp(INFINITY));
}
END_TEST

START_TEST(test_exp_11) {
  ck_assert_double_eq(s21_exp(-INFINITY), exp(-INFINITY));
}
END_TEST

START_TEST(test_exp_12) { ck_assert_ldouble_nan(s21_exp(NAN)); }
END_TEST

START_TEST(test_exp_13) { ck_assert_ldouble_nan(s21_exp(-NAN)); }
END_TEST

START_TEST(test_exp_14) {
  ck_assert_double_eq_tol(s21_exp(0.6), exp(0.6), 0.000001);
}
END_TEST

START_TEST(test_exp_15) {
  ck_assert_double_eq_tol(s21_exp(0.09), exp(0.09), 0.000001);
}
END_TEST

START_TEST(test_exp_16) { ck_assert_ldouble_infinite(s21_exp(s21_MAX_DOUBLE)); }
END_TEST

START_TEST(test_exp_17) {
  ck_assert_double_eq_tol(s21_exp(s21_DBL_MIN), exp(s21_DBL_MIN), 0.000001);
}
END_TEST

START_TEST(test_exp_18) {
  ck_assert_double_eq_tol(s21_exp(45.2), exp(45.2), 0.000001);
}
END_TEST

START_TEST(test_exp_19) { ck_assert_ldouble_infinite(s21_exp(1200)); }
END_TEST

START_TEST(test_exp_20) {
  ck_assert_double_eq_tol(s21_exp(s21_MIN_LLONG), exp(s21_MIN_LLONG), 0.000001);
}
END_TEST

START_TEST(test_exp_21) { ck_assert_ldouble_infinite(s21_exp(s21_MAX_LLONG)); }
END_TEST

START_TEST(test_exp_22) {
  double x = 4.3234323e-43;
  ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), 1e-6);
}

START_TEST(test_exp_23) {
  double x = 24.67;
  ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), 1e-6);
}
END_TEST

START_TEST(test_exp_24) {
  double x = 38;
  ck_assert_double_eq_tol(exp(x), s21_exp(x), 1e-6);  // ld ->d
}
END_TEST

START_TEST(test_exp_25) {
  double x = -24.67;
  ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), 1e-6);
}
END_TEST

START_TEST(test_exp_26) {
  double x = -38;
  ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), 1e-6);
}
END_TEST

Suite *test_exp(void) {
  Suite *s = suite_create("\033[45m-=s21_EXP=-\033[0m");
  TCase *tc = tcase_create("insert_tc");

  tcase_add_test(tc, test_exp_1);
  tcase_add_test(tc, test_exp_2);
  tcase_add_test(tc, test_exp_3);
  tcase_add_test(tc, test_exp_4);
  tcase_add_test(tc, test_exp_8);
  tcase_add_test(tc, test_exp_9);
  tcase_add_test(tc, test_exp_10);
  tcase_add_test(tc, test_exp_11);
  tcase_add_test(tc, test_exp_12);
  tcase_add_test(tc, test_exp_13);
  tcase_add_test(tc, test_exp_14);
  tcase_add_test(tc, test_exp_15);
  tcase_add_test(tc, test_exp_16);
  tcase_add_test(tc, test_exp_17);
  tcase_add_test(tc, test_exp_18);
  tcase_add_test(tc, test_exp_19);
  tcase_add_test(tc, test_exp_20);
  tcase_add_test(tc, test_exp_21);
  tcase_add_test(tc, test_exp_22);
  tcase_add_test(tc, test_exp_23);
  tcase_add_test(tc, test_exp_24);
  tcase_add_test(tc, test_exp_25);
  tcase_add_test(tc, test_exp_26);

  suite_add_tcase(s, tc);
  return s;
}