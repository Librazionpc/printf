#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _int(int number)
{
	char *string;
	unsigned int lenght;
	int _case = 0;
	if (number < 0)
	{
		number = -number;
		_case = 2;
	}
	string = print_int(number, 10, _case);
	lenght  = print_string(string);
	free(string);
	return (lenght);
}

int _unsigned_int(unsigned int number)
{
	char *string;
	unsigned int lenght;

	string = print_int(number, 10, 0);
	lenght = print_string(string);
	free(string);
	return (lenght);
}

int oct_conversion(unsigned int number)
{
	char *string;
	unsigned int lenght;

	string = print_int(number, 8, 0);
	lenght = print_string(string);
	free(string);
	return (lenght);
}

int hex_conversion(unsigned int number, char cap)
{
	char *string;
	unsigned int lenght;

	if (cap == 'x')
	       string = print_int(number, 16, 0);
	else if (cap == 'X')
		string = print_int(number, 16, 1);
	lenght = print_string(string);
	free(string);
	return (lenght);	
}	
