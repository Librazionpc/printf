#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 */

char *binary(int number)
{
	char *string;

	string = print_int(number, 2, 0);
	return (string);
}

char *oct(int number)
{
	char *string;

	string = print_int(number, 8, 0);
	return (string);
}

char *hex(int number, char cap)
{
	char *string;

	if (cap == 'x')
		string = print_int(number, 16, 0);
	else if (cap == 'X')
		string = print_int(number, 16, 1);
	return (string);
}

char *print_unsigned_int(unsigned int number)
{
	char *string;
	string = print_int(number, 10, 0);
	return (string);
}

char *_int(int number)
{
	int _case = 0;
	char *string;
	if (number < 0)
	{
		number = -number;
		_case = 2;
	}

	string = print_int(number, 10, _case);
	return (string);
}