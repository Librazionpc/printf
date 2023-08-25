#ifndef _MAIN_H_
#define _MAIN_H_
<<<<<<< HEAD
=======
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
>>>>>>> 29afbf4 (wrote a custom conversion specifier for my _printf function)
#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
char *print_string(char *s);
<<<<<<< HEAD
char *print_int(unsigned int n, unsigned int base, int cap);
char *print_char(char c);
char *binary(int number);
char *oct(int number);
char *hex(int number,char cap);
char *print_unsigned_int(unsigned int number);
char *_int(int number);
=======
char *print_int(unsigned int num, unsigned int base, int _case);
char *_int(int num);
char *_unsigned_int(unsigned int number);
char *oct_conversion(unsigned int number);
char *hex_conversion(unsigned int number, char cap);
char *binary_conversion(unsigned int number);
char *get_string(char spec, int value);
char *get_string_str(char *value, char spec);
char *print_string_(char *s);
>>>>>>> 29afbf4 (wrote a custom conversion specifier for my _printf function)

#endif
