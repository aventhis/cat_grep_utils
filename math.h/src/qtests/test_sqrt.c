#include "test_main.h"

START_TEST(test_sqrt_1) {
  ck_assert_double_eq_tol(s21_sqrt(10.1), sqrt(10.1), 0.000001);
}
END_TEST

START_TEST(test_sqrt_2) {
  ck_assert_double_eq_tol(s21_sqrt(10.9), sqrt(10.9), 0.000001);
}
END_TEST

START_TEST(test_sqrt_3) {
  ck_assert_double_eq_tol(s21_sqrt(10.0), sqrt(10.0), 0.000001);
}
END_TEST

START_TEST(test_sqrt_4) { ck_assert_ldouble_nan(s21_sqrt(-10.9)); }
END_TEST

START_TEST(test_sqrt_8) {
  ck_assert_double_eq_tol(s21_sqrt(-0.0), sqrt(-0.0), 0.000001);
}
END_TEST

START_TEST(test_sqrt_9) {
  ck_assert_double_eq_tol(s21_sqrt(0.0), sqrt(0.0), 0.000001);
}
END_TEST

START_TEST(test_sqrt_10) {
  ck_assert_double_eq(s21_sqrt(INFINITY), sqrt(INFINITY));
}
END_TEST

START_TEST(test_sqrt_11) { ck_assert_ldouble_nan(s21_sqrt(-INFINITY)); }
END_TEST

START_TEST(test_sqrt_12) { ck_assert_ldouble_nan(s21_sqrt(NAN)); }
END_TEST

START_TEST(test_sqrt_13) { ck_assert_ldouble_nan(s21_sqrt(-NAN)); }
END_TEST

START_TEST(test_sqrt_14) {
  ck_assert_double_eq_tol(s21_sqrt(0.6), sqrt(0.6), 0.000001);
}
END_TEST

START_TEST(test_sqrt_15) {
  ck_assert_double_eq_tol(s21_sqrt(0.09), sqrt(0.09), 0.000001);
}
END_TEST

START_TEST(test_pos_real_3) {
  double x = 4.163435e-34;
  ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 1e-6);
}
END_TEST

START_TEST(test_pos_real_4) {
  double x = 1e-7;
  ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 1e-6);
}
END_TEST

Suite *test_sqrt(void) {
  Suite *s = suite_create("\033[45m-=S21_SQRT=-\033[0m");
  TCase *tc = tcase_create("insert_tc");

  tcase_add_test(tc, test_sqrt_1);
  tcase_add_test(tc, test_sqrt_2);
  tcase_add_test(tc, test_sqrt_3);
  tcase_add_test(tc, test_sqrt_4);
  tcase_add_test(tc, test_sqrt_8);
  tcase_add_test(tc, test_sqrt_9);
  tcase_add_test(tc, test_sqrt_10);
  tcase_add_test(tc, test_sqrt_11);
  tcase_add_test(tc, test_sqrt_12);
  tcase_add_test(tc, test_sqrt_13);
  tcase_add_test(tc, test_sqrt_14);
  tcase_add_test(tc, test_sqrt_15);
  tcase_add_test(tc, test_pos_real_3);
  tcase_add_test(tc, test_pos_real_4);

  suite_add_tcase(s, tc);
  return s;
}