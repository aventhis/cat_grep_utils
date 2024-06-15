# math.h

Creating a custom version of the math.h mathematical library.

## Introduction

In this project, a custom version of the standard math.h library in C was created. This library implements basic mathematical operations used in various algorithms. The goal of the project was to familiarize with the basics of computational methods and strengthen structured programming skills.

### Overview of some "math.h" functions

| No. | Function | Description |
| --- | -------- | ----------- |
| 1 | `int abs(int x)` | calculates the absolute value of an integer |
| 2 | `long double acos(double x)` | calculates the arc cosine |
| 3 | `long double asin(double x)` | calculates the arc sine |
| 4 | `long double atan(double x)` | calculates the arc tangent |
| 5 | `long double ceil(double x)` | returns the smallest integer greater than or equal to the given value |
| 6 | `long double cos(double x)` | calculates the cosine |
| 7 | `long double exp(double x)` | returns the value of e raised to the given power |
| 8 | `long double fabs(double x)` | calculates the absolute value of a floating-point number |
| 9 | `long double floor(double x)` | returns the largest integer less than or equal to the given value |
| 10 | `long double fmod(double x, double y)` | remainder of the floating-point division operation |
| 11 | `long double log(double x)` | calculates the natural logarithm |
| 12 | `long double pow(double base, double exp)` | raises a number to the given power |
| 13 | `long double sin(double x)` | calculates the sine |
| 14 | `long double sqrt(double x)` | calculates the square root |
| 15 | `long double tan(double x)` | calculates the tangent |  

## Part 1. Implementation of the math.h library functions

The functions of the math.h library (only those directly listed [above](#overview-of-some-mathh-functions)) were implemented:

- The library was developed in C standard C11 using the gcc compiler;
- The library code is located in the src folder;
- Deprecated and obsolete language constructs and library functions were not used. Legacy and obsolete tags in the official documentation were considered. The POSIX.1-2017 standard was followed;
- Google Style guidelines were adhered to when writing the code;
- The solution is designed as a static library named *s21_math.a* (with a header file s21_math.h);
- The library was developed in accordance with the principles of structured programming, eliminating code duplication;
- Full unit test coverage of the library functions was provided using the Check library;
- Unit tests verify the implementation results by comparing them with the standard math.h library implementation;
- Unit tests cover at least 80% of each function;
- The gcov_report target generates a gcov report in HTML format. To do this, unit tests are run with gcov flags;
- A Makefile was prepared for building the library and tests (with targets all, clean, test, s21_math.a, gcov_report);
- Copying the implementation and using the standard math.h library is prohibited everywhere except for unit tests;
- The logic of the standard library was followed (in terms of checks, memory handling, and behavior in non-standard situations);
- The overall accuracy checked is 16 significant digits;
- The accuracy of the fractional part checked is up to 6 decimal places.

## Project build

To build the project, follow these steps:

1. Clone the repository and navigate to the project folder

- **make all**: This target builds the entire project, including compiling all source files and creating executable files.
- **make clean**: This target removes all generated files, such as object files and executables, cleaning the project.
- **make s21_math.a**: This target creates the static library `s21_math.a` from all project source files.
- **make test**: This target compiles and runs all unit tests to verify the correctness of the library functions.
- **make gcov_report**: This target runs tests with gcov flags and generates a code coverage report in HTML format.




