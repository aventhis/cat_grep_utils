# string.h

Implementation of the string.h library with enhancements.

## Contents
0. [Introduction](#introduction)
1. [Project Description](#project-description)
2. [Information](#information)
3. [Implementation](#implementation-of-the-stringh-library-functions)  
4. [Build Instructions](#build-instructions)

## Introduction

This project represents a custom implementation of the string.h library in C with enhancements.

## Project Description

In this project, a custom version of the string.h library in C has been implemented with some enhancements. The string.h library is the main C library for working with strings. The project is aimed at mastering string data operations and reinforcing structured programming principles.

## Information

The C programming language contains a set of functions in its standard library that implement operations on strings (character strings and byte strings). It supports various operations such as copying, concatenation, marking, and searching. Strings in C must end with a null character: a string of n characters is represented as an array of n + 1 elements, the last of which is the "NULL" character.

### Types in string.h

| No. | Variable | Description |
| --- | --- | --- |
| 1 | size_t | An unsigned integer type that is the result of the sizeof keyword. |

### Macros in string.h

| No. | Macro | Description |
| --- | --- | --- |
| 1 | NULL | A macro that is the value of the null pointer constant. |

### Functions in string.h

| No. | Function | Description |
| --- | --- | --- |
| 1 | void *memchr(const void *str, int c, size_t n) | Searches for the first occurrence of the character c (unsigned type) in the first n bytes of the string pointed to by the argument str. |
| 2 | int memcmp(const void *str1, const void *str2, size_t n) | Compares the first n bytes of str1 and str2. |
| 3 | void *memcpy(void *dest, const void *src, size_t n) | Copies n characters from src to dest. |
| 4 | void *memset(void *str, int c, size_t n) | Copies the character c (unsigned type) to the first n characters of the string pointed to by the argument str. |
| 5 | char *strncat(char *dest, const char *src, size_t n) | Appends the string pointed to by src to the end of the string pointed to by dest up to n characters long. |
| 6 | char *strchr(const char *str, int c) | Searches for the first occurrence of the character c (unsigned type) in the string pointed to by the argument str. |
| 7 | int strncmp(const char *str1, const char *str2, size_t n) | Compares not more than the first n bytes of str1 and str2. |
| 8 | char *strncpy(char *dest, const char *src, size_t n) | Copies up to n characters from the string pointed to by src to dest. |
| 9 | size_t strcspn(const char *str1, const char *str2) | Calculates the length of the initial segment of str1 that consists entirely of characters not in str2. |
| 10 | char *strerror(int errnum) | Searches an internal array for the error number errnum and returns a pointer to the string with the error message. Macros containing arrays of error messages for mac and linux operating systems are implemented. The current OS is checked using directives. |
| 11 | size_t strlen(const char *str) | Calculates the length of the string str, excluding the terminating null character. |
| 12 | char *strpbrk(const char *str1, const char *str2) | Finds the first character in the string str1 that matches any character specified in str2. |
| 13 | char *strrchr(const char *str, int c) | Searches for the last occurrence of the character c (unsigned type) in the string pointed to by the argument str. |
| 14 | char *strstr(const char *haystack, const char *needle) | Finds the first occurrence of the entire string needle (excluding the terminating null character) that appears in the string haystack. |
| 15 | char *strtok(char *str, const char *delim) | Splits the string str into a series of tokens separated by delim. |

### Special String Handling Functions

| No. | Function | Description |
| --- | --- | --- |
| 1 | void *to_upper(const char *str) | Returns a copy of the string (str) converted to uppercase. In case of an error, returns NULL. |
| 2 | void *to_lower(const char *str) | Returns a copy of the string (str) converted to lowercase. In case of an error, returns NULL. |
| 3 | void *insert(const char *src, const char *str, size_t start_index) | Returns a new string in which the specified string (str) is inserted at the specified position (start_index) in the given string (src). In case of an error, returns NULL. |
| 4 | void *trim(const char *src, const char *trim_chars) | Returns a new string with all leading and trailing occurrences of a set of specified characters (trim_chars) removed from the given string (src). In case of an error, returns NULL. |

## Implementation of the string.h library functions

The functions of the string.h library described above have been implemented:

- The library was developed in C standard C11 using the gcc compiler.
- The library code, including header files, makefiles, and the library itself, is located in the src folder.
- Deprecated and obsolete language constructs and library functions were not used. Attention was paid to legacy and obsolete tags in the official documentation for the language and libraries used. The POSIX.1-2017 standard was followed.
- Google Style rules were followed when writing the code.
- The solution is designed as a static library named *s21_string.a* (with a header file s21_string.h).
- The library was developed in accordance with the principles of structured programming, eliminating code duplication.
- Full unit test coverage of the library functions was provided using the Check library.
- Unit tests verify the implementation results by comparing them with the standard string.h library implementation.
- Unit tests cover at least 80% of each function.
- A Makefile is provided for building the library and tests (with targets all, clean, test, s21_string.a, gcov_report).
- The gcov_report target generates a gcov report in HTML format. To do this, unit tests are run with gcov flags.
- Copying the implementation and using the standard string.h library and other string handling libraries is prohibited, except for unit tests.
- The logic of the standard string.h library is followed (in terms of checks, memory handling, and behavior in non-standard situations).

## Build Instructions

### Makefile Targets

- **make all**: This target builds the entire project, including compiling all source files and creating executable files.
- **make clean**: This target removes all generated files, such as object files and executables, cleaning the project.
- **make s21_string.a**: This target creates the static library `s21_string.a` from all project source files.
- **make test**: This target compiles and runs all unit tests to verify the correctness of the library functions.
- **make gcov_report**: This target runs tests with gcov flags and generates a code coverage report in HTML format.
