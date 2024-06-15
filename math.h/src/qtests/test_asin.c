#include "test_main.h"

START_TEST(test_asin_1) { ck_assert_ldouble_nan(s21_asin(10.1)); }
END_TEST

START_TEST(test_asin_2) { ck_assert_ldouble_nan(s21_asin(10.9)); }
END_TEST

START_TEST(test_asin_4) { ck_assert_ldouble_nan(s21_asin(-10.9)); }
END_TEST

START_TEST(test_asin_6) {
  ck_assert_double_eq_tol(s21_asin(-0.6), asin(-0.6), 0.000001);
}
END_TEST

START_TEST(test_asin_7) {
  ck_assert_double_eq_tol(s21_asin(-0.2), asin(-0.2), 0.000001);
}
END_TEST

START_TEST(test_asin_8) {
  ck_assert_double_eq_tol(s21_asin(-0.0), asin(-0.0), 0.000001);
}
END_TEST

START_TEST(test_asin_9) {
  ck_assert_double_eq_tol(s21_asin(0.0), asin(0.0), 0.000001);
}
END_TEST

START_TEST(test_asin_10) { ck_assert_ldouble_nan(s21_asin(INFINITY)); }
END_TEST

START_TEST(test_asin_11) { ck_assert_ldouble_nan(s21_asin(-INFINITY)); }
END_TEST

START_TEST(test_asin_12) { ck_assert_ldouble_nan(s21_asin(NAN)); }
END_TEST

START_TEST(test_asin_13) { ck_assert_ldouble_nan(s21_asin(-NAN)); }
END_TEST

START_TEST(test_asin_14) {
  ck_assert_double_eq_tol(s21_asin(0.6), asin(0.6), 0.000001);
}
END_TEST

START_TEST(test_asin_15) {
  ck_assert_double_eq_tol(s21_asin(0.09), asin(0.09), 0.000001);
}
END_TEST

START_TEST(test_asin_16) { ck_assert_ldouble_nan(s21_asin(s21_MAX_DOUBLE)); }
END_TEST

START_TEST(test_asin_17) {
  ck_assert_double_eq_tol(s21_asin(s21_DBL_MIN), asin(s21_DBL_MIN), 0.000001);
}
END_TEST

START_TEST(test_asin_18) {
  ck_assert_double_eq_tol(s21_asin(1), asin(1), 0.000001);
}
END_TEST

START_TEST(test_asin_19) {
  ck_assert_double_eq_tol(s21_asin(-1), asin(-1), 0.000001);
}
END_TEST

START_TEST(test_asin_20) {
  ck_assert_double_eq_tol(s21_asin(0), asin(0), 0.000001);
}
END_TEST

START_TEST(test_asin_21) { ck_assert_ldouble_nan(s21_asin(s21_MIN_LLONG)); }
END_TEST

START_TEST(test_asin_22) { ck_assert_ldouble_nan(s21_asin(s21_MAX_LLONG)); }
END_TEST

Suite *test_asin(void) {
  Suite *s = suite_create("\033[45m-=s21_ASIN=-\033[0m");
  TCase *tc = tcase_create("insert_tc");

  tcase_add_test(tc, test_asin_1);
  tcase_add_test(tc, test_asin_2);
  tcase_add_test(tc, test_asin_4);
  tcase_add_test(tc, test_asin_6);
  tcase_add_test(tc, test_asin_7);
  tcase_add_test(tc, test_asin_8);
  tcase_add_test(tc, test_asin_9);
  tcase_add_test(tc, test_asin_10);
  tcase_add_test(tc, test_asin_11);
  tcase_add_test(tc, test_asin_12);
  tcase_add_test(tc, test_asin_13);
  tcase_add_test(tc, test_asin_14);
  tcase_add_test(tc, test_asin_15);
  tcase_add_test(tc, test_asin_16);
  tcase_add_test(tc, test_asin_17);
  tcase_add_test(tc, test_asin_18);
  tcase_add_test(tc, test_asin_19);
  tcase_add_test(tc, test_asin_20);
  tcase_add_test(tc, test_asin_21);
  tcase_add_test(tc, test_asin_22);

  suite_add_tcase(s, tc);
  return s;
}