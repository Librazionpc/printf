#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
int len;
    int len2;
    unsigned int ui;	
     len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
      _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
	_printf("What is going wrong\n");
	printf("what is going wrong\n");
	return (0);
}
