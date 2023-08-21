#include "main.h"

char *_int(int number)
{
	char *string;
	int _case = 0;
	
	if (number < 0)
	{
		number = -number;
		_case = 2;
	}
	string = print_int(number, 10, _case);
	if (string == NULL)
		return (NULL);
	return (string);
}

char * _unsigned_int(unsigned int number)
{
	char *string;

	string = print_int(number, 10, 0);
	if (string == NULL)
		return (NULL);
	return (string);
}
char *binary_conversion(unsigned int number)
{
	char *string;

	string = print_int(number, 2, 0);
	if (string == NULL)
		return (NULL);
	return (string);
}
char *oct_conversion(unsigned int number)
{
	char *string;

	string = print_int(number, 8, 0);
	if (string == NULL)
		return (NULL);
	return (string);
}

char *hex_conversion(unsigned int number, char cap)
{
	char *string;

	if (cap == 'x')
	       string = print_int(number, 16, 0);
	else if (cap == 'X')
		string = print_int(number, 16, 1);
	if (string == NULL)
		return (NULL);
	return (string);	
}	
