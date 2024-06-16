#include "s21_string.h"

char *s21_strchr(const char *str, int c) {
  char *result = s21_NULL;
  while (*str != '\0') {
    if (*str == c) {
      result = (char *)str;
    }
    str++;
  }
  if (c == '\0') {
    result = (char *)str;
  }

  return result;
}
