#include "test_main.h"

START_TEST(test_tan_1) {
  ck_assert_double_eq_tol(s21_tan(10.1), tan(10.1), 0.000001);
}
END_TEST

START_TEST(test_tan_2) {
  ck_assert_double_eq_tol(s21_tan(10.9), tan(10.9), 0.000001);
}
END_TEST

START_TEST(test_tan_3) {
  ck_assert_double_eq_tol(s21_tan(10.0), tan(10.0), 0.000001);
}
END_TEST

START_TEST(test_tan_4) {
  ck_assert_double_eq_tol(s21_tan(-10.9), tan(-10.9), 0.000001);
}
END_TEST

START_TEST(test_tan_5) {
  ck_assert_double_eq_tol(s21_tan(-10.1), tan(-10.1), 0.000001);
}
END_TEST

START_TEST(test_tan_6) {
  ck_assert_double_eq_tol(s21_tan(-0.6), tan(-0.6), 0.000001);
}
END_TEST

START_TEST(test_tan_7) {
  ck_assert_double_eq_tol(s21_tan(-0.2), tan(-0.2), 0.000001);
}
END_TEST

START_TEST(test_tan_8) {
  ck_assert_double_eq_tol(s21_tan(-0.0), tan(-0.0), 0.000001);
}
END_TEST

START_TEST(test_tan_9) {
  ck_assert_double_eq_tol(s21_tan(0.0), tan(0.0), 0.000001);
}
END_TEST

START_TEST(test_tan_10) { ck_assert_ldouble_nan(s21_tan(INFINITY)); }
END_TEST

START_TEST(test_tan_11) { ck_assert_ldouble_nan(s21_tan(-INFINITY)); }
END_TEST

START_TEST(test_tan_12) { ck_assert_ldouble_nan(s21_tan(NAN)); }
END_TEST

START_TEST(test_tan_13) { ck_assert_ldouble_nan(s21_tan(-NAN)); }
END_TEST

START_TEST(test_tan_14) {
  ck_assert_double_eq_tol(s21_tan(0.6), tan(0.6), 0.000001);
}
END_TEST

START_TEST(test_tan_15) {
  ck_assert_double_eq_tol(s21_tan(0.09), tan(0.09), 0.000001);
}
END_TEST

START_TEST(test_tan_18) {
  ck_assert_double_eq_tol(s21_tan(-1200), tan(-1200), 0.000001);
}
END_TEST

START_TEST(test_tan_19) {
  ck_assert_double_eq_tol(s21_tan(1200), tan(1200), 0.000001);
}
END_TEST

START_TEST(test_tan_20) {
  ck_assert_double_eq_tol(s21_tan(-1200.0), tan(-1200.0), 0.000001);
}
END_TEST

START_TEST(s21_tan_double_3) {
  double num = -0.5;
  ck_assert_ldouble_eq_tol(s21_tan(num), tan(num), 2e-06);
}
END_TEST

START_TEST(s21_tan_double) {
  double num = -1234567890.1234567890;
  ck_assert_double_eq_tol(s21_tan(num), tan(num), 2e-06);
}
END_TEST

START_TEST(s21_tan_ldouble_4) {
  double num = -0.3425443513423432432432;
  ck_assert_ldouble_eq_tol(s21_tan(num), tan(num), 2e-06);
}
END_TEST

Suite *test_tan(void) {
  Suite *s = suite_create("\033[45m-=s21_TAN=-\033[0m");
  TCase *tc = tcase_create("insert_tc");

  tcase_add_test(tc, test_tan_1);
  tcase_add_test(tc, test_tan_2);
  tcase_add_test(tc, test_tan_3);
  tcase_add_test(tc, test_tan_4);
  tcase_add_test(tc, test_tan_5);
  tcase_add_test(tc, test_tan_6);
  tcase_add_test(tc, test_tan_7);
  tcase_add_test(tc, test_tan_8);
  tcase_add_test(tc, test_tan_9);
  tcase_add_test(tc, test_tan_10);
  tcase_add_test(tc, test_tan_11);
  tcase_add_test(tc, test_tan_12);
  tcase_add_test(tc, test_tan_13);
  tcase_add_test(tc, test_tan_14);
  tcase_add_test(tc, test_tan_15);
  tcase_add_test(tc, test_tan_18);
  tcase_add_test(tc, test_tan_19);
  tcase_add_test(tc, test_tan_20);
  tcase_add_test(tc, s21_tan_double_3);
  tcase_add_test(tc, s21_tan_double);
  tcase_add_test(tc, s21_tan_ldouble_4);

  suite_add_tcase(s, tc);
  return s;
}