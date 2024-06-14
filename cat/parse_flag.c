#include "parse_flag.h"

#include <getopt.h>
#include <stdio.h>

int parse_flags(int argc, char *argv[], char *short_flags,
                struct option long_flags[], flags *all_flag) {
  int res = 0;
  int index = 0;  // нужен для getopt
  int flag_error = 0;

  while ((res = getopt_long(argc, argv, short_flags, long_flags, &index)) !=
         -1) {
    switch (res) {
      case 'b':
        all_flag->b = 1;
        break;
      case 'e':
        all_flag->e = 1;
        all_flag->v = 1;
        break;
      case 'n':
        all_flag->n = 1;
        break;
      case 's':
        all_flag->s = 1;
        break;
      case 't':
        all_flag->t = 1;
        all_flag->v = 1;
        break;
      case 'E':
        all_flag->e = 1;
        break;
      case 'T':
        all_flag->t = 1;
        break;
      case 'v':
        all_flag->v = 1;
        break;
      case '?':
        flag_error = 1;
        break;
      default:
        flag_error = 1;
        break;
    }
  }
  return flag_error;
}
