#include "test_main.h"

START_TEST(test_fmod_1) {
  ck_assert_double_eq_tol(s21_fmod(4, 2), fmod(4, 2), 0.000001);
}
END_TEST

START_TEST(test_fmod_2) {
  ck_assert_double_eq_tol(s21_fmod(-4, 2), fmod(-4, 2), 0.000001);
}
END_TEST

START_TEST(test_fmod_3) {
  ck_assert_double_eq_tol(s21_fmod(4, -2), fmod(4, -2), 0.000001);
}
END_TEST

START_TEST(test_fmod_4) {
  ck_assert_double_eq_tol(s21_fmod(0, 2), fmod(0, 2), 0.000001);
}
END_TEST

START_TEST(test_fmod_5) {
  ck_assert_double_eq_tol(s21_fmod(-0, 2), fmod(-0, 2), 0.000001);
}
END_TEST

START_TEST(test_fmod_6) {
  ck_assert_double_eq_tol(s21_fmod(-0.0, 2), fmod(-0.0, 2), 0.000001);
}
END_TEST

START_TEST(test_fmod_7) {
  ck_assert_double_eq_tol(s21_fmod(100.543, 22.478), fmod(100.543, 22.478),
                          0.000001);
}
END_TEST

START_TEST(test_fmod_8) {
  ck_assert_double_eq_tol(s21_fmod(-100.543, -22.478), fmod(-100.543, -22.478),
                          0.000001);
}
END_TEST

START_TEST(test_fmod_9) { ck_assert_ldouble_nan(s21_fmod(-0.0, -0.0)); }
END_TEST

START_TEST(test_fmod_10) { ck_assert_ldouble_nan(s21_fmod(0.0, 0.0)); }
END_TEST

START_TEST(test_fmod_11) {
  ck_assert_double_eq_tol(s21_fmod(-4, -2), fmod(-4, -2), 0.000001);
}
END_TEST

START_TEST(test_fmod_12) { ck_assert_ldouble_nan(s21_fmod(NAN, 1000)); }
END_TEST

START_TEST(test_fmod_13) { ck_assert_ldouble_nan(s21_fmod(-NAN, -NAN)); }
END_TEST

START_TEST(test_fmod_14) { ck_assert_ldouble_nan(s21_fmod(INFINITY, -2)); }
END_TEST

START_TEST(test_fmod_15) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, INFINITY));
}
END_TEST

START_TEST(test_fmod_16) {
  ck_assert_ldouble_nan(s21_fmod(-INFINITY, -INFINITY));
}
END_TEST

START_TEST(test_fmod_17) {
  ck_assert_double_eq_tol(s21_fmod(s21_DBL_MIN, s21_MAX_DOUBLE),
                          fmod(s21_DBL_MIN, s21_MAX_DOUBLE), 0.000001);
}
END_TEST

START_TEST(s21_fmod_MAIN_test) {
  long double f_value[] = {4234, 20,      234,    -756,   435,    24.342, 345,
                           645,  2.24234, 53.534, 6456,   1,      0,      -1,
                           34,   64,      9786,   534.53, 756.56, 754};
  long double s_value[] = {8898.07,  6881.63, 1537.52, 5783.31, 2675.7,
                           5560.06,  1240.69, 9348.66, 103.02,  4153.9,
                           250,      29.3,    96.456,  86,      29.5,
                           302.0234, 1,       1947.38, 953,     42};
  for (int i = 0; i < 20; i++) {
    ck_assert_double_eq_tol(s21_fmod(f_value[i], s_value[i]),
                            fmod(f_value[i], s_value[i]), 0.000001);
  }
}

START_TEST(s21_fmod_mone1) {
  double num = -1.00;
  double exp = 4.00;
  ck_assert_ldouble_eq(s21_fmod(num, exp), fmod(num, exp));
}
END_TEST

START_TEST(s21_fmod_mone2) {
  double num = -1.00;
  double exp = 4.88;
  ck_assert_ldouble_eq(s21_fmod(num, exp), fmod(num, exp));
  ck_assert_ldouble_eq(s21_fmod(num, exp), fmod(num, exp));
}
END_TEST

START_TEST(s21_fmod_mone3) {
  double num = -1.00;
  double exp = 5.00;
  ck_assert_ldouble_eq(s21_fmod(num, exp), fmod(num, exp));
}
END_TEST

START_TEST(s21_fmod_mone4) {
  double num = -1.00;
  double exp = -4.00;
  ck_assert_ldouble_eq(s21_fmod(num, exp), fmod(num, exp));
}
END_TEST

START_TEST(s21_fmod_mone5) {
  double num = -1.00;
  double exp = -4.88;
  ck_assert_ldouble_eq(s21_fmod(num, exp), fmod(num, exp));
  ck_assert_ldouble_eq(s21_fmod(num, exp), fmod(num, exp));
}
END_TEST

START_TEST(s21_fmod_mone6) {
  double num = -1.00;
  double exp = -5.00;
  ck_assert_ldouble_eq(s21_fmod(num, exp), fmod(num, exp));
}
END_TEST

START_TEST(s21_fmod_double) {
  double num = -3.14169;
  double exp = 8;
  ck_assert_ldouble_eq_tol(s21_fmod(num, exp), fmod(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_fmod_double2) {
  double num = -3.14169;
  double exp = 8.88;
  ck_assert_ldouble_eq(s21_fmod(num, exp), fmod(num, exp));
  ck_assert_ldouble_eq(s21_fmod(num, exp), fmod(num, exp));
}
END_TEST

START_TEST(s21_fmod_double3) {
  double num = -3.14169;
  double exp = -8;
  ck_assert_ldouble_eq_tol(s21_fmod(num, exp), fmod(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_fmod_double4) {
  double num = -3.14169;
  double exp = -7;
  ck_assert_ldouble_eq_tol(s21_fmod(num, exp), fmod(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_fmod_double5) {
  double num = -3.14169;
  double exp = -7.88;
  ck_assert_ldouble_eq(s21_fmod(num, exp), fmod(num, exp));
  ck_assert_ldouble_eq(s21_fmod(num, exp), fmod(num, exp));
}
END_TEST

START_TEST(s21_fmod_double6) {
  double num = -0.5;
  double exp = -6;
  ck_assert_ldouble_eq_tol(s21_fmod(num, exp), fmod(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_fmod_double_one) {
  double num = -3.14169;
  double exp = 1.00;
  ck_assert_ldouble_eq_tol(s21_fmod(num, exp), fmod(num, exp), 1e-6);
}
END_TEST

START_TEST(s21_fmod_double_mone) {
  double num = -3.14169;
  double exp = -1.00;
  ck_assert_ldouble_eq_tol(s21_fmod(num, exp), fmod(num, exp), 1e-6);
}
END_TEST

Suite *test_fmod(void) {
  Suite *s = suite_create("\033[45m-=S21_FMOD=-\033[0m");
  TCase *tc = tcase_create("insert_tc");

  tcase_add_test(tc, test_fmod_1);
  tcase_add_test(tc, test_fmod_2);
  tcase_add_test(tc, test_fmod_3);
  tcase_add_test(tc, test_fmod_4);
  tcase_add_test(tc, test_fmod_5);
  tcase_add_test(tc, test_fmod_6);
  tcase_add_test(tc, test_fmod_7);
  tcase_add_test(tc, test_fmod_8);
  tcase_add_test(tc, test_fmod_9);
  tcase_add_test(tc, test_fmod_10);
  tcase_add_test(tc, test_fmod_11);
  tcase_add_test(tc, test_fmod_12);
  tcase_add_test(tc, test_fmod_13);
  tcase_add_test(tc, test_fmod_14);
  tcase_add_test(tc, test_fmod_15);
  tcase_add_test(tc, test_fmod_16);
  tcase_add_test(tc, test_fmod_17);
  tcase_add_test(tc, s21_fmod_MAIN_test);
  tcase_add_test(tc, s21_fmod_mone1);
  tcase_add_test(tc, s21_fmod_mone2);
  tcase_add_test(tc, s21_fmod_mone3);
  tcase_add_test(tc, s21_fmod_mone4);
  tcase_add_test(tc, s21_fmod_mone5);
  tcase_add_test(tc, s21_fmod_mone6);
  tcase_add_test(tc, s21_fmod_double);
  tcase_add_test(tc, s21_fmod_double2);
  tcase_add_test(tc, s21_fmod_double3);
  tcase_add_test(tc, s21_fmod_double4);
  tcase_add_test(tc, s21_fmod_double5);
  tcase_add_test(tc, s21_fmod_double6);
  tcase_add_test(tc, s21_fmod_double_one);
  tcase_add_test(tc, s21_fmod_double_mone);

  suite_add_tcase(s, tc);
  return s;
}