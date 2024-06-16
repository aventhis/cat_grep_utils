# Projects on C

This repository contains several projects written in the C programming language. Each project demonstrates different aspects of C programming, including working with mathematical libraries, command-line utilities, and more.

## Contents

1. [s21_math](#s21_math)
2. [s21_string+](#s21_string)
2. [s21_cat](#s21_cat)
3. [s21_grep](#s21_grep)

## s21_math

The `s21_math` project is a custom implementation of the standard math.h library in C. This library includes basic mathematical operations used in various algorithms.

### Main Features

- Implementation of mathematical library functions such as `sin`, `cos`, `tan`, `exp`, `log`, and others.
- Full unit test coverage using the Check library.
- Code coverage report generation using gcov.

### Makefile Targets Description

- **all**: This target builds the entire project, including compiling all source files and creating executable files.
- **clean**: This target removes all generated files, such as object files and executables, cleaning the project.
- **s21_math.a**: This target creates the static library `s21_math.a` from all project source files.
- **test**: This target compiles and runs all unit tests to verify the correctness of the library functions.
- **gcov_report**: This target runs tests with gcov flags and generates a code coverage report in HTML format.

## s21_string+

Implementation of the string.h library with enhancements.

### Main Features

- Implementation of the string.h library functions such as `memchr`, `memcmp`, `memcpy`, `memset`, `strncat`, `strchr`, `strncmp`, `strncpy`, `strcspn`, `strerror`, `strlen`, `strpbrk`, `strrchr`, `strstr`, `strtok`.
- Special string handling functions such as `to_upper`, `to_lower`, `insert`, `trim`.
- Full unit test coverage using the Check library.

### Makefile Targets Description

- **all**: This target builds the entire project, including compiling all source files and creating executables.
- **clean**: This target removes all generated files, such as object files and executables, cleaning the project.
- **s21_string.a**: This target creates the static library `s21_string.a` from all project source files.
- **test**: This target compiles and runs all unit tests to verify the correctness of the library functions.
- **gcov_report**: This target runs tests with gcov flags and generates a code coverage report in HTML format.

## s21_cat

The `s21_cat` project is a C implementation of the `cat` utility, which concatenates and displays file contents.

### Main Features

- Support for standard and additional flags such as `-b`, `-e`, `-n`, `-s`, `-t`.

### Build and Run

1. Build the project:
   ```sh
   make all

2. Run the utility:
    ```sh
    ./s21_cat [OPTION] [FILE]...

## s21_grep

The `s21_grep` project is a C implementation of the `grep` utility, which searches for patterns within files.

### Main Features

- Support for flags `-e`, `-i`, `-v`, `-c`, `-l`, `-n`, and others.

### Build and Run

1. Build the project:
   ```sh
   make all
2. Run the utility:
    ```sh
    ./s21_grep [OPTION] [PATTERN] [FILE]...


   
