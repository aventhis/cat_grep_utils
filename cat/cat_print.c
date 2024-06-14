#include <stdio.h>

#include "parse_flag.h"

void cat(FILE *new_f, flags all_flag) {
  int symbol;
  char prev_symbol = '\n';
  int count = 0;                  // для флага s
  int number_of_lines = 1;        // для флага n
  int number_of_empty_lines = 1;  // для флага b
  if (all_flag.b) all_flag.n = 0;
  while ((symbol = fgetc(new_f)) != EOF) {
    if (prev_symbol == '\n') {
      if (all_flag.s) {
        if (symbol == '\n') {
          if (count) continue;
          count = 1;
        } else
          count = 0;
      }
      if (all_flag.n) printf("%6d\t", number_of_lines++);
      if (all_flag.b && symbol != '\n') {
        printf("%6d\t", number_of_empty_lines++);
      }
    }
    if (symbol == '\n') {
      if (all_flag.e) putchar('$');
    } else if (symbol == '\t') {
      if (all_flag.t) {
        putchar('^');
        symbol = 'I';
      }
    } else if (all_flag.v) {
      if ((symbol >= 0 && symbol <= 8) || (symbol >= 11 && symbol <= 31)) {
        putchar('^');
        symbol += 64;
      } else if (symbol == 127) {
        putchar('^');
        symbol = '?';
      }
    }
    prev_symbol = symbol;
    putchar(symbol);
  }
}
