#include "test_main.h"

START_TEST(test_fabs_1) {
  ck_assert_double_eq_tol(s21_fabs(10.1), fabs(10.1), 0.000001);
}
END_TEST

START_TEST(test_fabs_2) {
  ck_assert_double_eq_tol(s21_fabs(10.9), fabs(10.9), 0.000001);
}
END_TEST

START_TEST(test_fabs_3) {
  ck_assert_double_eq_tol(s21_fabs(10.0), fabs(10.0), 0.000001);
}
END_TEST

START_TEST(test_fabs_4) {
  ck_assert_double_eq_tol(s21_fabs(-10.9), fabs(-10.9), 0.000001);
}
END_TEST

START_TEST(test_fabs_5) {
  ck_assert_double_eq_tol(s21_fabs(-10.1), fabs(-10.1), 0.000001);
}
END_TEST

START_TEST(test_fabs_6) {
  ck_assert_double_eq_tol(s21_fabs(-0.6), fabs(-0.6), 0.000001);
}
END_TEST

START_TEST(test_fabs_7) {
  ck_assert_double_eq_tol(s21_fabs(-0.2), fabs(-0.2), 0.000001);
}
END_TEST

START_TEST(test_fabs_8) {
  ck_assert_double_eq_tol(s21_fabs(-0.0), fabs(-0.0), 0.000001);
}
END_TEST

START_TEST(test_fabs_9) {
  ck_assert_double_eq_tol(s21_fabs(0.0), fabs(0.0), 0.000001);
}
END_TEST

START_TEST(test_fabs_10) {
  ck_assert_double_eq(s21_fabs(INFINITY), fabs(INFINITY));
}
END_TEST

START_TEST(test_fabs_11) {
  ck_assert_double_eq(s21_fabs(-INFINITY), fabs(-INFINITY));
}
END_TEST

START_TEST(test_fabs_12) { ck_assert_ldouble_nan(s21_fabs(NAN)); }
END_TEST

START_TEST(test_fabs_13) { ck_assert_ldouble_nan(s21_fabs(-NAN)); }
END_TEST

START_TEST(test_fabs_14) {
  ck_assert_double_eq_tol(s21_fabs(0.6), fabs(0.6), 0.000001);
}
END_TEST

START_TEST(test_fabs_15) {
  ck_assert_double_eq_tol(s21_fabs(0.09), fabs(0.09), 0.000001);
}
END_TEST

START_TEST(test_fabs_16) {
  ck_assert_double_eq_tol(s21_fabs(s21_MAX_DOUBLE), fabs(s21_MAX_DOUBLE),
                          0.000001);
}
END_TEST

START_TEST(test_fabs_17) {
  ck_assert_double_eq_tol(s21_fabs(s21_DBL_MIN), fabs(s21_DBL_MIN), 0.000001);
}
END_TEST

Suite *test_fabs(void) {
  Suite *s = suite_create("\033[45m-=S21_fabs=-\033[0m");
  TCase *tc = tcase_create("insert_tc");

  tcase_add_test(tc, test_fabs_1);
  tcase_add_test(tc, test_fabs_2);
  tcase_add_test(tc, test_fabs_3);
  tcase_add_test(tc, test_fabs_4);
  tcase_add_test(tc, test_fabs_5);
  tcase_add_test(tc, test_fabs_6);
  tcase_add_test(tc, test_fabs_7);
  tcase_add_test(tc, test_fabs_8);
  tcase_add_test(tc, test_fabs_9);
  tcase_add_test(tc, test_fabs_10);
  tcase_add_test(tc, test_fabs_11);
  tcase_add_test(tc, test_fabs_12);
  tcase_add_test(tc, test_fabs_13);
  tcase_add_test(tc, test_fabs_14);
  tcase_add_test(tc, test_fabs_15);
  tcase_add_test(tc, test_fabs_16);
  tcase_add_test(tc, test_fabs_17);

  suite_add_tcase(s, tc);
  return s;
}