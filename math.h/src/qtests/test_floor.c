#include "test_main.h"

START_TEST(test_floor_1) {
  ck_assert_double_eq_tol(s21_floor(10.1), floor(10.1), 0.000001);
}
END_TEST

START_TEST(test_floor_2) {
  ck_assert_double_eq_tol(s21_floor(10.9), floor(10.9), 0.000001);
}
END_TEST

START_TEST(test_floor_3) {
  ck_assert_double_eq_tol(s21_floor(10.0), floor(10.0), 0.000001);
}
END_TEST

START_TEST(test_floor_4) {
  ck_assert_double_eq_tol(s21_floor(-10.9), floor(-10.9), 0.000001);
}
END_TEST

START_TEST(test_floor_5) {
  ck_assert_double_eq_tol(s21_floor(-10.1), floor(-10.1), 0.000001);
}
END_TEST

START_TEST(test_floor_6) {
  ck_assert_double_eq_tol(s21_floor(-0.6), floor(-0.6), 0.000001);
}
END_TEST

START_TEST(test_floor_7) {
  ck_assert_double_eq_tol(s21_floor(-0.2), floor(-0.2), 0.000001);
}
END_TEST

START_TEST(test_floor_8) {
  ck_assert_double_eq_tol(s21_floor(-0.0), floor(-0.0), 0.000001);
}
END_TEST

START_TEST(test_floor_9) {
  ck_assert_double_eq_tol(s21_floor(0.0), floor(0.0), 0.000001);
}
END_TEST

START_TEST(test_floor_10) {
  ck_assert_double_eq(s21_floor(INFINITY), floor(INFINITY));
}
END_TEST

START_TEST(test_floor_11) {
  ck_assert_double_eq(s21_floor(-INFINITY), floor(-INFINITY));
}
END_TEST

START_TEST(test_floor_12) { ck_assert_ldouble_nan(s21_floor(NAN)); }
END_TEST

START_TEST(test_floor_13) { ck_assert_ldouble_nan(s21_floor(-NAN)); }
END_TEST

START_TEST(test_floor_14) {
  ck_assert_double_eq_tol(s21_floor(0.6), floor(0.6), 0.000001);
}
END_TEST

START_TEST(test_floor_15) {
  ck_assert_double_eq_tol(s21_floor(0.09), floor(0.09), 0.000001);
}
END_TEST

START_TEST(test_floor_16) {
  ck_assert_double_eq_tol(s21_floor(s21_MAX_DOUBLE), floor(s21_MAX_DOUBLE),
                          0.000001);
}
END_TEST

START_TEST(test_floor_17) {
  ck_assert_double_eq_tol(s21_floor(s21_DBL_MIN), floor(s21_DBL_MIN), 0.000001);
}
END_TEST

START_TEST(test_floor_18) {
  ck_assert_double_eq_tol(s21_floor(-1200), floor(-1200), 0.000001);
}
END_TEST

START_TEST(test_floor_19) {
  ck_assert_double_eq_tol(s21_floor(1200), floor(1200), 0.000001);
}
END_TEST

START_TEST(test_floor_20) {
  ck_assert_double_eq_tol(s21_floor(-1200.0), floor(-1200.0), 0.000001);
}
END_TEST

START_TEST(test_floor_21) {
  ck_assert_double_eq_tol(s21_floor(-1e23), floor(-1e23), 0.000001);
}
END_TEST

Suite *test_floor(void) {
  Suite *s = suite_create("\033[45m-=s21_FLOOR=-\033[0m");
  TCase *tc = tcase_create("insert_tc");

  tcase_add_test(tc, test_floor_1);
  tcase_add_test(tc, test_floor_2);
  tcase_add_test(tc, test_floor_3);
  tcase_add_test(tc, test_floor_4);
  tcase_add_test(tc, test_floor_5);
  tcase_add_test(tc, test_floor_6);
  tcase_add_test(tc, test_floor_7);
  tcase_add_test(tc, test_floor_8);
  tcase_add_test(tc, test_floor_9);
  tcase_add_test(tc, test_floor_10);
  tcase_add_test(tc, test_floor_11);
  tcase_add_test(tc, test_floor_12);
  tcase_add_test(tc, test_floor_13);
  tcase_add_test(tc, test_floor_14);
  tcase_add_test(tc, test_floor_15);
  tcase_add_test(tc, test_floor_16);
  tcase_add_test(tc, test_floor_17);
  tcase_add_test(tc, test_floor_18);
  tcase_add_test(tc, test_floor_19);
  tcase_add_test(tc, test_floor_20);
  tcase_add_test(tc, test_floor_21);

  suite_add_tcase(s, tc);
  return s;
}