#include <getopt.h>
#include <stdio.h>
#include <string.h>

#include "cat_print.h"
#include "parse_flag.h"

int main(int argc, char *argv[]) {
  flags all_flag = {0};
  char short_flags[] = "+benstETv";
  struct option long_flags[] = {{"number-nonblank", no_argument, NULL, 'b'},
                                {"number", no_argument, NULL, 'n'},
                                {"squeeze-blank", no_argument, NULL, 's'}};

  int error = parse_flags(argc, argv, short_flags, long_flags, &all_flag);

  if (error == 1) {
    fprintf(stderr, "Error");
  } else {
    for (int i = optind; i < argc; i++) {
      if (strcmp(argv[i], "-") == 0)  // обработка символа "-" - ввод через
                                      // stdin
        continue;
      else {
        FILE *new = fopen(argv[i], "r");
        if (new == NULL)
          fprintf(stderr, "Error: file not found");
        else {
          cat(new, all_flag);
          fclose(new);
        }
      }
    }
  }

  return 0;
}
