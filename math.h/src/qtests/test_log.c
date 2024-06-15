#include "test_main.h"

START_TEST(test_log_1) {
  ck_assert_double_eq_tol(s21_log(10.1), log(10.1), 0.000001);
}
END_TEST

START_TEST(test_log_2) {
  ck_assert_double_eq_tol(s21_log(10.9), log(10.9), 0.000001);
}
END_TEST

START_TEST(test_log_3) {
  ck_assert_double_eq_tol(s21_log(10.0), log(10.0), 0.000001);
}
END_TEST

START_TEST(test_log_4) { ck_assert_ldouble_nan(s21_log(-10.9)); }
END_TEST

START_TEST(test_log_8) { ck_assert_ldouble_infinite(s21_log(-0.0)); }
END_TEST

START_TEST(test_log_9) { ck_assert_ldouble_infinite(s21_log(0.0)); }
END_TEST

START_TEST(test_log_10) {
  ck_assert_double_eq(s21_log(INFINITY), log(INFINITY));
}
END_TEST

START_TEST(test_log_11) { ck_assert_ldouble_nan(s21_log(-INFINITY)); }
END_TEST

START_TEST(test_log_12) { ck_assert_ldouble_nan(s21_log(NAN)); }
END_TEST

START_TEST(test_log_13) { ck_assert_ldouble_nan(s21_log(-NAN)); }
END_TEST

START_TEST(test_log_14) {
  ck_assert_double_eq_tol(s21_log(0.6), log(0.6), 0.000001);
}
END_TEST

START_TEST(test_log_15) {
  ck_assert_double_eq_tol(s21_log(0.09), log(0.09), 0.000001);
}
END_TEST

START_TEST(test_log_16) {
  ck_assert_double_eq_tol(s21_log(s21_MAX_DOUBLE), log(s21_MAX_DOUBLE),
                          0.000001);
}
END_TEST

START_TEST(test_log_17) {
  ck_assert_double_eq_tol(s21_log(s21_DBL_MIN), log(s21_DBL_MIN), 0.000001);
}
END_TEST

START_TEST(test_log_19) {
  ck_assert_double_eq_tol(s21_log(1200), log(1200), 0.000001);
}
END_TEST

START_TEST(test_log_20) { ck_assert_ldouble_nan(s21_log(s21_MIN_LLONG)); }
END_TEST

START_TEST(test_log_21) {
  ck_assert_double_eq_tol(s21_log(s21_MAX_LLONG), log(s21_MAX_LLONG), 0.000001);
}
END_TEST

START_TEST(test_log_22) {
  double x = 4.3234323e-43;
  ck_assert_ldouble_eq_tol(log(x), s21_log(x), 1e-6);
}

Suite *test_log(void) {
  Suite *s = suite_create("\033[45m-=s21_LOG=-\033[0m");
  TCase *tc = tcase_create("insert_tc");

  tcase_add_test(tc, test_log_1);
  tcase_add_test(tc, test_log_2);
  tcase_add_test(tc, test_log_3);
  tcase_add_test(tc, test_log_4);
  tcase_add_test(tc, test_log_8);
  tcase_add_test(tc, test_log_9);
  tcase_add_test(tc, test_log_10);
  tcase_add_test(tc, test_log_11);
  tcase_add_test(tc, test_log_12);
  tcase_add_test(tc, test_log_13);
  tcase_add_test(tc, test_log_14);
  tcase_add_test(tc, test_log_15);
  tcase_add_test(tc, test_log_16);
  tcase_add_test(tc, test_log_17);
  tcase_add_test(tc, test_log_19);
  tcase_add_test(tc, test_log_20);
  tcase_add_test(tc, test_log_21);
  tcase_add_test(tc, test_log_22);

  suite_add_tcase(s, tc);
  return s;
}