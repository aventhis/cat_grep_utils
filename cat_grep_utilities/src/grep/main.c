#include "grep_print.h"

int main(int argc, char *argv[]) {
  flags all_flag = {0};
  char short_flags[] = "e:ivclnhsof:";
  char *sample;
  char patterns[100000] = {0};
  patterns[0] = 0;

  int error = parse_flags(argc, argv, short_flags, &all_flag, patterns);
  if (all_flag.v && all_flag.o) all_flag.o = 0;

  if (error == 1) {
    fprintf(stderr, "Error - parser error");
  } else if (argc - optind == 0 && optind > 0) {
    fprintf(stderr, "Error - invalid input data");
  } else {
    if (all_flag.e || all_flag.f) {
      for (int i = optind; i < argc; i++) {
        FILE *new = fopen(argv[i], "r");
        if (new == NULL) {
          if (!all_flag.s) fprintf(stderr, "Error: file not found\n");
        } else {
          grep(new, patterns, all_flag, argc, argv[i]);
          fclose(new);
        }
      }
    } else {
      sample = argv[optind];
      for (int i = (optind + 1); i < argc; i++) {
        FILE *new = fopen(argv[i], "r");
        if (new == NULL) {
          if (!all_flag.s) fprintf(stderr, "Error: file not found\n");
        } else {
          grep(new, sample, all_flag, argc, argv[i]);
          fclose(new);
        }
      }
    }
  }
  return 0;
}