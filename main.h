#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *s);
char *print_int(unsigned int num, unsigned int base, int _case);
int _int(int num);
int _unsigned_int(unsigned int number);
int oct_conversion(unsigned int number);
int hex_conversion(unsigned int number, char cap);
#endif
