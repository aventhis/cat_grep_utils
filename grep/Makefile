CC = gcc
CFLAG = -Wall -Werror -Wextra -std=c11

all: s21_grep

s21_grep:
	$(CC) $(CFLAG) main.c grep_parse_flag.c grep_print.c -o s21_grep

clean:
	rm -rf *.o s21_grep

rebuild: clean all

