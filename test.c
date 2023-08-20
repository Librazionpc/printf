#include "main.h"
#include <stdio.h>

int main(void)
{
	int len1 = _printf("I name is %s, i am %d years old and i want ot be %s in the future, i can convert decimal to binary %o\n", "Habeeb", 60, "Software Engineer", -9899);
	int len2 = printf("I name is %s, i am %d years old and i want to be %s in the future, i can convert decimal to binary %o\n", "Habeeb", 60, "Software Engineer", -9899);
	_printf("len1: %d and len2: %d\n", len1, len2);
	printf("len1: %d and len2: %d\n", len1, len2);
	return (0);
}
