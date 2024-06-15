#ifndef PARSE_FLAG_H
#define PARSE_FLAG_H
#include <getopt.h>
#include <stdio.h>

typedef struct {
  int b;
  int e;
  int n;
  int s;
  int t;
  int v;
} flags;

int parse_flags(int argc, char *argv[], char *short_flags,
                struct option long_flags[], flags *all_flag);

#endif