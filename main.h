#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
char *print_char(char c);
char *print_string(char *s);
char *print_int(unsigned int num, unsigned int base, int _case);
char *_int(int num);
char *_unsigned_int(unsigned int number);
char *oct_conversion(unsigned int number);
char *hex_conversion(unsigned int number, char cap);
char *binary_conversion(unsigned int number);
#endif
