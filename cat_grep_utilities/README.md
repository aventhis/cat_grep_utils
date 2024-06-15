# cat_grep_utils

This project contains two command-line utilities written in C: `cat` and `grep`.

- All programs are located in the `src/cat/` and `src/grep/` folders.

## Build

1. Run `make` to build the project in the `src/cat/` and `src/grep/` folders.

## General Requirements

- The code is written in C11 using the gcc compiler.
- POSIX.1-2017 and Google Style Guide standards were used.
- Executable files were created, which accept command-line arguments.
- The programs are built using a Makefile with the main targets: `s21_cat` and `s21_grep`.
- Integration tests covering all flags and input values were conducted, comparing behavior with real Bash utilities.
- Principles of structured programming were followed, code duplication was eliminated, and common modules were used.

## Utility `cat`

`cat [OPTION] [FILE]...`

### cat Options

| No. | Options | Description |
| --- | ------- | ----------- |
| 1 | -b (GNU: --number-nonblank) | numbers only non-blank lines |
| 2 | -e implies -v (GNU only: -E same as -e but without applying -v) | also displays end-of-line characters as $ |
| 3 | -n (GNU: --number) | numbers all output lines |
| 4 | -s (GNU: --squeeze-blank) | suppresses repeated empty lines |
| 5 | -t implies -v (GNU: -T same as -t but without applying -v) | also displays tabs as ^I |

- Supports flags (including GNU versions): `-b`, `-e`, `-n`, `-s`, `-t`, `-v`
- Source and header files are located in the `src/cat/` directory.
- The executable file is located in `src/cat/` and is called `s21_cat`.

## Utility `grep`

`grep [options] template [file_name]`

### grep Options

| No. | Options | Description |
| --- | ------- | ----------- |
| 1 | -e | Pattern |
| 2 | -i | Ignores case differences. |
| 3 | -v | Inverts the sense of matching. |
| 4 | -c | Displays only the count of matching lines. |
| 5 | -l | Displays only matching files. |
| 6 | -n | Prefixes each output line with the line number from the input file. |
| 7 | -h | Displays matching lines without prepending file names. |
| 8 | -s | Suppresses error messages about nonexistent or unreadable files. |
| 9 | -f file | Takes patterns from the file. |
| 10 | -o | Prints only the matching (non-empty) parts of matching lines. |

- Supports flags: `-e`, `-i`, `-v`, `-c`, `-l`, `-n`.
- Use the `pcre` or `regex` libraries for regular expressions.
- Source and header files are located in the `src/grep/` directory.
- The executable file is located in `src/grep/` and is called `s21_grep`.

### Additional Tasks

- Additional `grep` flags have been implemented: `-h`, `-s`, `-f`, `-o`.
- Combinations of `grep` flags have been implemented, such as `-iv`, `-in`.
