#include "test_main.h"

START_TEST(test_acos_1) { ck_assert_ldouble_nan(s21_acos(10.1)); }
END_TEST

START_TEST(test_acos_2) { ck_assert_ldouble_nan(s21_acos(10.9)); }
END_TEST

START_TEST(test_acos_4) { ck_assert_ldouble_nan(s21_acos(-10.9)); }
END_TEST

START_TEST(test_acos_6) {
  ck_assert_double_eq_tol(s21_acos(-0.6), acos(-0.6), 0.000001);
}
END_TEST

START_TEST(test_acos_7) {
  ck_assert_double_eq_tol(s21_acos(-0.2), acos(-0.2), 0.000001);
}
END_TEST

START_TEST(test_acos_8) {
  ck_assert_double_eq_tol(s21_acos(-0.0), acos(-0.0), 0.000001);
}
END_TEST

START_TEST(test_acos_9) {
  ck_assert_double_eq_tol(s21_acos(0.0), acos(0.0), 0.000001);
}
END_TEST

START_TEST(test_acos_10) { ck_assert_ldouble_nan(s21_acos(INFINITY)); }
END_TEST

START_TEST(test_acos_11) { ck_assert_ldouble_nan(s21_acos(-INFINITY)); }
END_TEST

START_TEST(test_acos_12) { ck_assert_ldouble_nan(s21_acos(NAN)); }
END_TEST

START_TEST(test_acos_13) { ck_assert_ldouble_nan(s21_acos(-NAN)); }
END_TEST

START_TEST(test_acos_14) {
  ck_assert_double_eq_tol(s21_acos(0.6), acos(0.6), 0.000001);
}
END_TEST

START_TEST(test_acos_15) {
  ck_assert_double_eq_tol(s21_acos(0.09), acos(0.09), 0.000001);
}
END_TEST

START_TEST(test_acos_16) { ck_assert_ldouble_nan(s21_acos(s21_MAX_DOUBLE)); }
END_TEST

START_TEST(test_acos_17) {
  ck_assert_double_eq_tol(s21_acos(s21_DBL_MIN), acos(s21_DBL_MIN), 0.000001);
}
END_TEST

START_TEST(test_acos_18) {
  ck_assert_double_eq_tol(s21_acos(1), acos(1), 0.000001);
}
END_TEST

START_TEST(test_acos_19) {
  ck_assert_double_eq_tol(s21_acos(-1), acos(-1), 0.000001);
}
END_TEST

START_TEST(test_acos_20) {
  ck_assert_double_eq_tol(s21_acos(0), acos(0), 0.000001);
}
END_TEST

START_TEST(test_acos_21) { ck_assert_ldouble_nan(s21_acos(s21_MIN_LLONG)); }
END_TEST

START_TEST(test_acos_22) { ck_assert_ldouble_nan(s21_acos(s21_MAX_LLONG)); }
END_TEST

Suite *test_acos(void) {
  Suite *s = suite_create("\033[45m-=s21_ACOS=-\033[0m");
  TCase *tc = tcase_create("insert_tc");

  tcase_add_test(tc, test_acos_1);
  tcase_add_test(tc, test_acos_2);
  tcase_add_test(tc, test_acos_4);
  tcase_add_test(tc, test_acos_6);
  tcase_add_test(tc, test_acos_7);
  tcase_add_test(tc, test_acos_8);
  tcase_add_test(tc, test_acos_9);
  tcase_add_test(tc, test_acos_10);
  tcase_add_test(tc, test_acos_11);
  tcase_add_test(tc, test_acos_12);
  tcase_add_test(tc, test_acos_13);
  tcase_add_test(tc, test_acos_14);
  tcase_add_test(tc, test_acos_15);
  tcase_add_test(tc, test_acos_16);
  tcase_add_test(tc, test_acos_17);
  tcase_add_test(tc, test_acos_18);
  tcase_add_test(tc, test_acos_19);
  tcase_add_test(tc, test_acos_20);
  tcase_add_test(tc, test_acos_21);
  tcase_add_test(tc, test_acos_22);

  suite_add_tcase(s, tc);
  return s;
}