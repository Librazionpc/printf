#ifndef _MAIN_H_
#define _MAIN_H_
#define BUFFER_SIZE 1024
int _printf(const char *format, ...);
char *print_string(char *s);
char *print_int(unsigned int n, unsigned int base, int cap);
char *print_char(char c);
char *binary(int number);
char *oct(int number);
char *hex(int number,char cap);
char *print_unsigned_int(unsigned int number);
char *_int(int number);
#endif
