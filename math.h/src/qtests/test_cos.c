#include "test_main.h"

START_TEST(test_cos_1) {
  ck_assert_double_eq_tol(s21_cos(10.1), cos(10.1), 0.000001);
}
END_TEST

START_TEST(test_cos_2) {
  ck_assert_double_eq_tol(s21_cos(10.9), cos(10.9), 0.000001);
}
END_TEST

START_TEST(test_cos_3) {
  ck_assert_double_eq_tol(s21_cos(10.0), cos(10.0), 0.000001);
}
END_TEST

START_TEST(test_cos_4) {
  ck_assert_double_eq_tol(s21_cos(-10.9), cos(-10.9), 0.000001);
}
END_TEST

START_TEST(test_cos_5) {
  ck_assert_double_eq_tol(s21_cos(-10.1), cos(-10.1), 0.000001);
}
END_TEST

START_TEST(test_cos_6) {
  ck_assert_double_eq_tol(s21_cos(-0.6), cos(-0.6), 0.000001);
}
END_TEST

START_TEST(test_cos_7) {
  ck_assert_double_eq_tol(s21_cos(-0.2), cos(-0.2), 0.000001);
}
END_TEST

START_TEST(test_cos_8) {
  ck_assert_double_eq_tol(s21_cos(-0.0), cos(-0.0), 0.000001);
}
END_TEST

START_TEST(test_cos_9) {
  ck_assert_double_eq_tol(s21_cos(0.0), cos(0.0), 0.000001);
}
END_TEST

START_TEST(test_cos_10) { ck_assert_ldouble_nan(s21_cos(INFINITY)); }
END_TEST

START_TEST(test_cos_11) { ck_assert_ldouble_nan(s21_cos(-INFINITY)); }
END_TEST

START_TEST(test_cos_12) { ck_assert_ldouble_nan(s21_cos(NAN)); }
END_TEST

START_TEST(test_cos_13) { ck_assert_ldouble_nan(s21_cos(-NAN)); }
END_TEST

START_TEST(test_cos_14) {
  ck_assert_double_eq_tol(s21_cos(0.6), cos(0.6), 0.000001);
}
END_TEST

START_TEST(test_cos_15) {
  ck_assert_double_eq_tol(s21_cos(0.09), cos(0.09), 0.000001);
}
END_TEST

START_TEST(test_cos_18) {
  ck_assert_double_eq_tol(s21_cos(-1200), cos(-1200), 0.000001);
}
END_TEST

START_TEST(test_cos_19) {
  ck_assert_double_eq_tol(s21_cos(1200), cos(1200), 0.000001);
}
END_TEST

START_TEST(test_cos_20) {
  ck_assert_double_eq_tol(s21_cos(-1200.0), cos(-1200.0), 0.000001);
}
END_TEST

Suite *test_cos(void) {
  Suite *s = suite_create("\033[45m-=s21_COS=-\033[0m");
  TCase *tc = tcase_create("insert_tc");

  tcase_add_test(tc, test_cos_1);
  tcase_add_test(tc, test_cos_2);
  tcase_add_test(tc, test_cos_3);
  tcase_add_test(tc, test_cos_4);
  tcase_add_test(tc, test_cos_5);
  tcase_add_test(tc, test_cos_6);
  tcase_add_test(tc, test_cos_7);
  tcase_add_test(tc, test_cos_8);
  tcase_add_test(tc, test_cos_9);
  tcase_add_test(tc, test_cos_10);
  tcase_add_test(tc, test_cos_11);
  tcase_add_test(tc, test_cos_12);
  tcase_add_test(tc, test_cos_13);
  tcase_add_test(tc, test_cos_14);
  tcase_add_test(tc, test_cos_15);
  tcase_add_test(tc, test_cos_18);
  tcase_add_test(tc, test_cos_19);
  tcase_add_test(tc, test_cos_20);

  suite_add_tcase(s, tc);
  return s;
}