#include "test_main.h"

START_TEST(test_ceil_1) {
  ck_assert_double_eq_tol(s21_ceil(10.1), ceil(10.1), 0.000001);
}
END_TEST

START_TEST(test_ceil_2) {
  ck_assert_double_eq_tol(s21_ceil(10.9), ceil(10.9), 0.000001);
}
END_TEST

START_TEST(test_ceil_3) {
  ck_assert_double_eq_tol(s21_ceil(10.0), ceil(10.0), 0.000001);
}
END_TEST

START_TEST(test_ceil_4) {
  ck_assert_double_eq_tol(s21_ceil(-10.9), ceil(-10.9), 0.000001);
}
END_TEST

START_TEST(test_ceil_5) {
  ck_assert_double_eq_tol(s21_ceil(-10.1), ceil(-10.1), 0.000001);
}
END_TEST

START_TEST(test_ceil_6) {
  ck_assert_double_eq_tol(s21_ceil(-0.6), ceil(-0.6), 0.000001);
}
END_TEST

START_TEST(test_ceil_7) {
  ck_assert_double_eq_tol(s21_ceil(-0.2), ceil(-0.2), 0.000001);
}
END_TEST

START_TEST(test_ceil_8) {
  ck_assert_double_eq_tol(s21_ceil(-0.0), ceil(-0.0), 0.000001);
}
END_TEST

START_TEST(test_ceil_9) {
  ck_assert_double_eq_tol(s21_ceil(0.0), ceil(0.0), 0.000001);
}
END_TEST

START_TEST(test_ceil_10) {
  ck_assert_double_eq(s21_ceil(INFINITY), ceil(INFINITY));
}
END_TEST

START_TEST(test_ceil_11) {
  ck_assert_double_eq(s21_ceil(-INFINITY), ceil(-INFINITY));
}
END_TEST

START_TEST(test_ceil_12) { ck_assert_ldouble_nan(s21_ceil(NAN)); }
END_TEST

START_TEST(test_ceil_13) { ck_assert_ldouble_nan(s21_ceil(-NAN)); }
END_TEST

START_TEST(test_ceil_14) {
  ck_assert_double_eq_tol(s21_ceil(0.6), ceil(0.6), 0.000001);
}
END_TEST

START_TEST(test_ceil_15) {
  ck_assert_double_eq_tol(s21_ceil(0.09), ceil(0.09), 0.000001);
}
END_TEST

START_TEST(test_ceil_16) {
  ck_assert_double_eq_tol(s21_ceil(s21_MAX_DOUBLE), ceil(s21_MAX_DOUBLE),
                          0.000001);
}
END_TEST

START_TEST(test_ceil_17) {
  ck_assert_double_eq_tol(s21_ceil(s21_DBL_MIN), ceil(s21_DBL_MIN), 0.000001);
}
END_TEST

Suite *test_ceil(void) {
  Suite *s = suite_create("\033[45m-=S21_CEIL=-\033[0m");
  TCase *tc = tcase_create("insert_tc");

  tcase_add_test(tc, test_ceil_1);
  tcase_add_test(tc, test_ceil_2);
  tcase_add_test(tc, test_ceil_3);
  tcase_add_test(tc, test_ceil_4);
  tcase_add_test(tc, test_ceil_5);
  tcase_add_test(tc, test_ceil_6);
  tcase_add_test(tc, test_ceil_7);
  tcase_add_test(tc, test_ceil_8);
  tcase_add_test(tc, test_ceil_9);
  tcase_add_test(tc, test_ceil_10);
  tcase_add_test(tc, test_ceil_11);
  tcase_add_test(tc, test_ceil_12);
  tcase_add_test(tc, test_ceil_13);
  tcase_add_test(tc, test_ceil_14);
  tcase_add_test(tc, test_ceil_15);
  tcase_add_test(tc, test_ceil_16);
  tcase_add_test(tc, test_ceil_17);

  suite_add_tcase(s, tc);
  return s;
}