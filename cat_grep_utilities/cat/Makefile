CC = gcc
CFLAG = -Wall -Werror -Wextra -std=c11

all: s21_cat

s21_cat: 
	$(CC) $(CFLAG) main.c parse_flag.c cat_print.c -o s21_cat

clean:
	rm -rf *.o s21_cat

rebuild: clean all