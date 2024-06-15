#include "test_main.h"

START_TEST(test_atan_1) {
  ck_assert_double_eq_tol(s21_atan(10.1), atan(10.1), 0.000001);
}
END_TEST

START_TEST(test_atan_2) {
  ck_assert_double_eq_tol(s21_atan(10.9), atan(10.9), 0.000001);
}
END_TEST

START_TEST(test_atan_3) {
  ck_assert_double_eq_tol(s21_atan(10.0), atan(10.0), 0.000001);
}
END_TEST

START_TEST(test_atan_4) {
  ck_assert_double_eq_tol(s21_atan(-10.9), atan(-10.9), 0.000001);
}
END_TEST

START_TEST(test_atan_5) {
  ck_assert_double_eq_tol(s21_atan(-10.1), atan(-10.1), 0.000001);
}
END_TEST

START_TEST(test_atan_6) {
  ck_assert_double_eq_tol(s21_atan(-0.6), atan(-0.6), 0.000001);
}
END_TEST

START_TEST(test_atan_7) {
  ck_assert_double_eq_tol(s21_atan(-0.2), atan(-0.2), 0.000001);
}
END_TEST

START_TEST(test_atan_8) {
  ck_assert_double_eq_tol(s21_atan(-0.0), atan(-0.0), 0.000001);
}
END_TEST

START_TEST(test_atan_9) {
  ck_assert_double_eq_tol(s21_atan(0.0), atan(0.0), 0.000001);
}
END_TEST

START_TEST(test_atan_10) {
  ck_assert_double_eq_tol(s21_atan(INFINITY), atan(INFINITY), 0.000001);
}
END_TEST

START_TEST(test_atan_11) {
  ck_assert_double_eq_tol(s21_atan(-INFINITY), atan(-INFINITY), 0.000001);
}
END_TEST

START_TEST(test_atan_12) { ck_assert_ldouble_nan(s21_atan(NAN)); }
END_TEST

START_TEST(test_atan_13) { ck_assert_ldouble_nan(s21_atan(-NAN)); }
END_TEST

START_TEST(test_atan_14) {
  ck_assert_double_eq_tol(s21_atan(0.6), atan(0.6), 0.000001);
}
END_TEST

START_TEST(test_atan_15) {
  ck_assert_double_eq_tol(s21_atan(0.09), atan(0.09), 0.000001);
}
END_TEST

START_TEST(test_atan_16) {
  ck_assert_double_eq_tol(s21_atan(DBL_MAX), atan(DBL_MAX), 0.000001);
}
END_TEST

START_TEST(test_atan_17) {
  ck_assert_double_eq_tol(s21_atan(s21_DBL_MIN), atan(s21_DBL_MIN), 0.000001);
}
END_TEST

START_TEST(test_atan_18) {
  ck_assert_double_eq_tol(s21_atan(-1200), atan(-1200), 0.000001);
}
END_TEST

START_TEST(test_atan_19) {
  ck_assert_double_eq_tol(s21_atan(1200), atan(1200), 0.000001);
}
END_TEST

START_TEST(test_atan_20) {
  ck_assert_double_eq_tol(s21_atan(-1200.0), atan(-1200.0), 0.000001);
}
END_TEST

START_TEST(test_atan_21) {
  ck_assert_double_eq_tol(s21_atan(s21_MIN_LLONG), atan(s21_MIN_LLONG),
                          0.000001);
}
END_TEST

START_TEST(test_atan_22) {
  ck_assert_double_eq_tol(s21_atan(s21_MAX_LLONG), atan(s21_MAX_LLONG),
                          0.000001);
}
END_TEST

START_TEST(s21_atan_test1) {
  ck_assert_ldouble_eq_tol(s21_atan(13.74), atan(13.74), 1e-06);
}
END_TEST

START_TEST(s21_atan_test2) {
  ck_assert_ldouble_eq_tol(s21_atan(-24.004), atan(-24.004), 1e-06);
}
END_TEST

START_TEST(s21_atan_test3) {
  ck_assert_ldouble_eq_tol(s21_atan(0.14148), atan(0.14148), 1e-06);
}
END_TEST

START_TEST(s21_atan_test4) {
  ck_assert_ldouble_eq_tol(s21_atan(1), atan(1), 1e-06);
}
END_TEST

START_TEST(s21_atan_test5) {
  ck_assert_ldouble_eq_tol(s21_atan(-1), atan(-1), 1e-06);
}
END_TEST

START_TEST(s21_atan_zero) {
  ck_assert_ldouble_eq_tol(s21_atan(0), atan(0), 1e-06);
}
END_TEST

START_TEST(s21_atan_infinity) {
  ck_assert_ldouble_eq_tol(s21_atan(INFINITY), atan(INFINITY), 1e-06);
}
END_TEST

START_TEST(s21_atan_neg_infinity) {
  ck_assert_ldouble_eq_tol(s21_atan(-INFINITY), atan(-INFINITY), 1e-06);
}
END_TEST

START_TEST(s21_atan_nan) {
  ck_assert_double_nan(s21_atan(NAN));
  ck_assert_double_nan(atan(NAN));
}
END_TEST

START_TEST(s21_atan_zero_2) {
  double num = 0;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_zero_3) {
  double num = -0;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_one) {
  double num = 1;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_one_2) {
  double num = 1.1;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_plus) {
  double num = 8;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_double) {
  double num = 3.14169;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_double_2) {
  double num = 0.5;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_double_3) {
  double num = -0.5;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_zero_zero) {
  double num = 0.0;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_null) {
  double num = s21_INF;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_null_minus) {
  double num = -s21_INF;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_nan_2) {
  double num = s21_NAN;
  ck_assert_int_eq(s21_atan(num), atan(num));
  ck_assert_ldouble_nan(s21_atan(num));
}
END_TEST

START_TEST(s21_atan_nan_minus) {
  double num = -s21_NAN;
  ck_assert_int_eq(s21_atan(num), atan(num));
  ck_assert_ldouble_nan(s21_atan(num));
}
END_TEST

START_TEST(s21_atan_ldouble) {
  double num = -1234567890.1234567890;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_ldouble_2) {
  double num = 8.4646435357845;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_ldouble_3) {
  double num = 0.3425443513423432432432;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_ldouble_4) {
  double num = -0.3425443513423432432432;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_ldouble_5) {
  double num = 1234567890.1234567890;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST
START_TEST(s21_atan_ldouble_6) {
  double num = 3;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

START_TEST(s21_atan_zero_4) {
  double num = -0.0000000000000000000088;
  ck_assert_ldouble_eq_tol(s21_atan(num), atan(num), 1e-6);
}
END_TEST

Suite *test_atan(void) {
  Suite *s = suite_create("\033[45m-=s21_ATAN=-\033[0m");
  TCase *tc = tcase_create("insert_tc");

  tcase_add_test(tc, test_atan_1);
  tcase_add_test(tc, test_atan_2);
  tcase_add_test(tc, test_atan_3);
  tcase_add_test(tc, test_atan_4);
  tcase_add_test(tc, test_atan_5);
  tcase_add_test(tc, test_atan_6);
  tcase_add_test(tc, test_atan_7);
  tcase_add_test(tc, test_atan_8);
  tcase_add_test(tc, test_atan_9);
  tcase_add_test(tc, test_atan_10);  // проверяет на возвращаемый inf, а
  // функция возвращает число, тест не нужен
  tcase_add_test(tc, test_atan_11);
  // // проверяет на возвращаемый inf, а функция возвращает число, тест не нужен
  tcase_add_test(tc, test_atan_12);
  tcase_add_test(tc, test_atan_13);
  tcase_add_test(tc, test_atan_14);
  tcase_add_test(tc, test_atan_15);
  tcase_add_test(tc, test_atan_16);  // бесконечный цикл
  tcase_add_test(tc, test_atan_17);
  tcase_add_test(tc, test_atan_18);
  tcase_add_test(tc, test_atan_19);
  tcase_add_test(tc, test_atan_20);
  tcase_add_test(tc,
                 test_atan_21);  //хз на сколько это вообще нужно обрабатывать
  tcase_add_test(tc,
                 test_atan_22);  //хз на сколько это вообще нужно обрабатывать
  tcase_add_test(tc, s21_atan_test1);
  tcase_add_test(tc, s21_atan_test2);
  tcase_add_test(tc, s21_atan_test3);
  tcase_add_test(tc, s21_atan_test4);
  tcase_add_test(tc, s21_atan_test5);
  tcase_add_test(tc, s21_atan_zero);
  tcase_add_test(tc, s21_atan_infinity);
  tcase_add_test(tc, s21_atan_neg_infinity);
  tcase_add_test(tc, s21_atan_nan);
  tcase_add_test(tc, s21_atan_zero_2);
  tcase_add_test(tc, s21_atan_zero_3);
  tcase_add_test(tc, s21_atan_one);
  tcase_add_test(tc, s21_atan_one_2);
  tcase_add_test(tc, s21_atan_plus);
  tcase_add_test(tc, s21_atan_double);
  tcase_add_test(tc, s21_atan_double_2);
  tcase_add_test(tc, s21_atan_double_3);
  tcase_add_test(tc, s21_atan_zero_zero);
  tcase_add_test(tc, s21_atan_null);
  tcase_add_test(tc, s21_atan_null_minus);
  tcase_add_test(tc, s21_atan_nan_2);
  tcase_add_test(tc, s21_atan_nan_minus);
  tcase_add_test(tc, s21_atan_ldouble);
  tcase_add_test(tc, s21_atan_ldouble_2);
  tcase_add_test(tc, s21_atan_ldouble_3);
  tcase_add_test(tc, s21_atan_ldouble_4);
  tcase_add_test(tc, s21_atan_ldouble_5);
  tcase_add_test(tc, s21_atan_ldouble_6);
  tcase_add_test(tc, s21_atan_zero_4);

  suite_add_tcase(s, tc);
  return s;
}