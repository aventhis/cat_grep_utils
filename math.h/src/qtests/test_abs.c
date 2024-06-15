#include "test_main.h"

START_TEST(test_abs_1) { ck_assert_int_eq(s21_abs(-123), abs(-123)); }
END_TEST

START_TEST(test_abs_2) { ck_assert_int_eq(s21_abs(123), abs(123)); }
END_TEST

START_TEST(test_abs_3) { ck_assert_int_eq(s21_abs(INT_MAX), abs(INT_MAX)); }
END_TEST

START_TEST(test_abs_4) { ck_assert_int_eq(s21_abs(INT_MIN), abs(INT_MIN)); }
END_TEST

START_TEST(test_abs_5) { ck_assert_int_eq(s21_abs(0), abs(0)); }
END_TEST

START_TEST(test_abs_6) {
  ck_assert_int_eq(s21_abs((int)INFINITY), abs((int)INFINITY));
}
END_TEST

START_TEST(test_abs_7) { ck_assert_int_eq(s21_abs((int)NAN), abs((int)NAN)); }
END_TEST

START_TEST(test_abs_8) {
  ck_assert_int_eq(s21_abs((int)-INFINITY), abs((int)-INFINITY));
}
END_TEST

Suite *test_abs(void) {
  Suite *s = suite_create("\033[45m-=S21_ABS=-\033[0m");
  TCase *tc = tcase_create("insert_tc");

  tcase_add_test(tc, test_abs_1);
  tcase_add_test(tc, test_abs_2);
  tcase_add_test(tc, test_abs_3);
  tcase_add_test(tc, test_abs_4);
  tcase_add_test(tc, test_abs_5);
  tcase_add_test(tc, test_abs_6);
  tcase_add_test(tc, test_abs_7);
  tcase_add_test(tc, test_abs_8);

  suite_add_tcase(s, tc);
  return s;
}