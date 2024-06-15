#include "test_main.h"

START_TEST(test_sin_1) {
  ck_assert_double_eq_tol(s21_sin(10.1), sin(10.1), 0.000001);
}
END_TEST

START_TEST(test_sin_2) {
  ck_assert_double_eq_tol(s21_sin(10.9), sin(10.9), 0.000001);
}
END_TEST

START_TEST(test_sin_3) {
  ck_assert_double_eq_tol(s21_sin(10.0), sin(10.0), 0.000001);
}
END_TEST

START_TEST(test_sin_4) {
  ck_assert_double_eq_tol(s21_sin(-10.9), sin(-10.9), 0.000001);
}
END_TEST

START_TEST(test_sin_5) {
  ck_assert_double_eq_tol(s21_sin(-10.1), sin(-10.1), 0.000001);
}
END_TEST

START_TEST(test_sin_6) {
  ck_assert_double_eq_tol(s21_sin(-0.6), sin(-0.6), 0.000001);
}
END_TEST

START_TEST(test_sin_7) {
  ck_assert_double_eq_tol(s21_sin(-0.2), sin(-0.2), 0.000001);
}
END_TEST

START_TEST(test_sin_8) {
  ck_assert_double_eq_tol(s21_sin(-0.0), sin(-0.0), 0.000001);
}
END_TEST

START_TEST(test_sin_9) {
  ck_assert_double_eq_tol(s21_sin(0.0), sin(0.0), 0.000001);
}
END_TEST

START_TEST(test_sin_10) { ck_assert_ldouble_nan(s21_sin(INFINITY)); }
END_TEST

START_TEST(test_sin_11) { ck_assert_ldouble_nan(s21_sin(-INFINITY)); }
END_TEST

START_TEST(test_sin_12) { ck_assert_ldouble_nan(s21_sin(NAN)); }
END_TEST

START_TEST(test_sin_13) { ck_assert_ldouble_nan(s21_sin(-NAN)); }
END_TEST

START_TEST(test_sin_14) {
  ck_assert_double_eq_tol(s21_sin(0.6), sin(0.6), 0.000001);
}
END_TEST

START_TEST(test_sin_15) {
  ck_assert_double_eq_tol(s21_sin(0.09), sin(0.09), 0.000001);
}
END_TEST

START_TEST(test_sin_17) {
  ck_assert_double_eq_tol(s21_sin(s21_DBL_MIN), sin(s21_DBL_MIN), 0.000001);
}
END_TEST

START_TEST(test_sin_18) {
  ck_assert_double_eq_tol(s21_sin(-1200), sin(-1200), 0.000001);
}
END_TEST

START_TEST(test_sin_19) {
  ck_assert_double_eq_tol(s21_sin(1200), sin(1200), 0.000001);
}
END_TEST

START_TEST(test_sin_20) {
  ck_assert_double_eq_tol(s21_sin(-1200.0), sin(-1200.0), 0.000001);
}
END_TEST

Suite *test_sin(void) {
  Suite *s = suite_create("\033[45m-=s21_SIN=-\033[0m");
  TCase *tc = tcase_create("insert_tc");

  tcase_add_test(tc, test_sin_1);
  tcase_add_test(tc, test_sin_2);
  tcase_add_test(tc, test_sin_3);
  tcase_add_test(tc, test_sin_4);
  tcase_add_test(tc, test_sin_5);
  tcase_add_test(tc, test_sin_6);
  tcase_add_test(tc, test_sin_7);
  tcase_add_test(tc, test_sin_8);
  tcase_add_test(tc, test_sin_9);
  tcase_add_test(tc, test_sin_10);
  tcase_add_test(tc, test_sin_11);
  tcase_add_test(tc, test_sin_12);
  tcase_add_test(tc, test_sin_13);
  tcase_add_test(tc, test_sin_14);
  tcase_add_test(tc, test_sin_15);
  tcase_add_test(tc, test_sin_17);
  tcase_add_test(tc, test_sin_18);
  tcase_add_test(tc, test_sin_19);
  tcase_add_test(tc, test_sin_20);

  suite_add_tcase(s, tc);
  return s;
}