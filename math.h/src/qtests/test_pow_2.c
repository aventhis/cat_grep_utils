#include "test_main.h"

START_TEST(test_pow_1) {
  double num = 2;
  double exp = 3;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_2) {
  double num = -2;
  double exp = 3;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_3) {
  double num = 2;
  double exp = -3;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_4) {
  double num = -2;
  double exp = -3;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_5) {
  double num = 222;
  double exp = 32;
  ck_assert_double_eq(s21_pow(num, exp), pow(num, exp));
}
END_TEST

START_TEST(test_pow_6) {
  double num = -2324;
  double exp = 322;
  ck_assert_ldouble_infinite(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_7) {
  double num = 222;
  double exp = -32;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_8) {
  double num = -2324;
  double exp = -322;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_9) {
  double num = 2.2;
  double exp = 3.6;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_10) {
  double num = -2.2;
  double exp = 3.6;
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_11) {
  double num = 2.2;
  double exp = -3.6;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_12) {
  double num = -2.2;
  double exp = -3.6;
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_14) {
  double num = -2324.32;
  double exp = 322.45;
  ck_assert_ldouble_infinite(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_15) {
  double num = 222.32;
  double exp = -32.24;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_16) {
  double num = -2324.32;
  double exp = -322.45;
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_17) {
  double num = 2;
  double exp = 0;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_18) {
  double num = -2;
  double exp = 0;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_19) {
  double num = 222;
  double exp = 0;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_20) {
  double num = -222;
  double exp = 0;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_21) {
  double num = 2.24;
  double exp = 0;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_22) {
  double num = -2.56;
  double exp = 0;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_23) {
  double num = 222.24;
  double exp = 0;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_24) {
  double num = -222.46664;
  double exp = 0;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_25) {
  double num = 0;
  double exp = 2;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_26) {
  double num = 0;
  double exp = -2;
  ck_assert_ldouble_infinite(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_27) {
  double num = 0;
  double exp = 222;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_28) {
  double num = 0;
  double exp = -222;
  ck_assert_ldouble_infinite(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_29) {
  double num = 0;
  double exp = 2.24;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_30) {
  double num = 0;
  double exp = 0;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_31) {
  double num = 0.0;
  double exp = 0.0;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_32) {
  double num = -0;
  double exp = -0;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_33) {
  double num = -0.0;
  double exp = -0.0;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_34) {
  double num = -0.0;
  double exp = 0.0;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_35) {
  double num = NAN;
  double exp = -3.6;
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_36) {
  double num = NAN;
  double exp = NAN;
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_37) {
  double num = -3.6;
  double exp = NAN;
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_38) {
  double num = -NAN;
  double exp = -3.6;
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_39) {
  double num = -NAN;
  double exp = -NAN;
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_40) {
  double num = -3.6;
  double exp = -NAN;
  ck_assert_ldouble_nan(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_41) {
  double num = -2324.32;
  double exp = INFINITY;
  ck_assert_ldouble_infinite(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_42) {
  double num = -2324.32;
  double exp = -INFINITY;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_43) {
  double num = 2324.32;
  double exp = INFINITY;
  ck_assert_ldouble_infinite(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_44) {
  double num = INFINITY;
  double exp = -INFINITY;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_45) {
  double num = DBL_MAX;
  double exp = DBL_MAX;
  ck_assert_ldouble_infinite(s21_pow(num, exp));
}
END_TEST

START_TEST(test_pow_46) {
  double num = DBL_MAX;
  double exp = DBL_MIN;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_47) {
  double num = DBL_MIN;
  double exp = 2;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_48) {
  double num = s21_MAX_LLONG;
  double exp = 2;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_49) {
  double num = s21_MAX_LLONG;
  double exp = 2;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

START_TEST(test_pow_50) {
  double num = s21_MIN_LLONG;
  double exp = 2;
  ck_assert_double_eq_tol(s21_pow(num, exp), pow(num, exp), 0.000001);
}
END_TEST

Suite *test_pow2(void) {
  Suite *s;
  TCase *tc;
  s = suite_create("\033[45m-=s21_POW_2=-\033[0m");
  tc = tcase_create("s21_pow");
  tcase_add_test(tc, test_pow_1);
  tcase_add_test(tc, test_pow_2);
  tcase_add_test(tc, test_pow_3);
  tcase_add_test(tc, test_pow_4);
  tcase_add_test(tc, test_pow_5);
  tcase_add_test(tc, test_pow_6);
  tcase_add_test(tc, test_pow_7);
  tcase_add_test(tc, test_pow_8);
  tcase_add_test(tc, test_pow_9);
  tcase_add_test(tc, test_pow_10);
  tcase_add_test(tc, test_pow_11);
  tcase_add_test(tc, test_pow_12);
  tcase_add_test(tc, test_pow_14);
  tcase_add_test(tc, test_pow_15);
  tcase_add_test(tc, test_pow_16);
  tcase_add_test(tc, test_pow_17);
  tcase_add_test(tc, test_pow_18);
  tcase_add_test(tc, test_pow_19);
  tcase_add_test(tc, test_pow_20);
  tcase_add_test(tc, test_pow_21);
  tcase_add_test(tc, test_pow_22);
  tcase_add_test(tc, test_pow_23);
  tcase_add_test(tc, test_pow_24);
  tcase_add_test(tc, test_pow_25);
  tcase_add_test(tc, test_pow_26);
  tcase_add_test(tc, test_pow_27);
  tcase_add_test(tc, test_pow_28);
  tcase_add_test(tc, test_pow_29);
  tcase_add_test(tc, test_pow_30);
  tcase_add_test(tc, test_pow_31);
  tcase_add_test(tc, test_pow_32);
  tcase_add_test(tc, test_pow_33);
  tcase_add_test(tc, test_pow_34);
  tcase_add_test(tc, test_pow_35);
  tcase_add_test(tc, test_pow_36);
  tcase_add_test(tc, test_pow_37);
  tcase_add_test(tc, test_pow_38);
  tcase_add_test(tc, test_pow_39);
  tcase_add_test(tc, test_pow_40);
  tcase_add_test(tc, test_pow_41);
  tcase_add_test(tc, test_pow_42);
  tcase_add_test(tc, test_pow_43);
  tcase_add_test(tc, test_pow_44);
  tcase_add_test(tc, test_pow_45);
  tcase_add_test(tc, test_pow_46);
  tcase_add_test(tc, test_pow_47);
  tcase_add_test(tc, test_pow_48);
  tcase_add_test(tc, test_pow_49);
  tcase_add_test(tc, test_pow_50);

  suite_add_tcase(s, tc);
  return s;
}
