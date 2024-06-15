#include "test_main.h"

int main(void) {
  int failed = 0;
  Suite *s21_math_test[] = {test_abs(),  test_ceil(), test_fabs(), test_floor(),
                            test_fmod(), test_pow(),

                            test_sin(),  test_cos(),  test_acos(), test_asin(),
                            test_log(),  test_sqrt(), test_pow2(), test_exp(),
                            test_tan(),  test_atan(),

                            NULL};

  for (int i = 0; s21_math_test[i] != NULL; i++) {
    SRunner *sr = srunner_create(s21_math_test[i]);

    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);

    failed += srunner_ntests_failed(sr);
    srunner_free(sr);
  }
  printf("========= FAILED: %d =========\n", failed);

  return failed == 0 ? 0 : 1;
}