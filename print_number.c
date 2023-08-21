#include "main.h"

/**
 * _int - Function that print int
 *
 * @number: Fetches the argument
 *
 * Return: The stringed int
 */

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

/**
 * _unsigned_int - Function print unsigned int
 *
 * @number: Fetches the argument
 *
 * Return: The string unsigned int
 */

char *_unsigned_int(unsigned int number)
{
	char *string;

	string = print_int(number, 10, 0);
	if (string == NULL)
		return (NULL);
	return (string);
}

/**
 * binary_conversion - Function that convert integers to binary
 *
 * @number: Fetches the argument
 *
 * Return: The string binary
 */

char *binary_conversion(unsigned int number)
{
	char *string;

	string = print_int(number, 2, 0);
	if (string == NULL)
		return (NULL);
	return (string);
}

/**
 * oct_conversion - Function that integer to oct
 *
 * @number: Fetches the argument
 *
 * Return: The stringed binary
 */

char *oct_conversion(unsigned int number)
{
	char *string;

	string = print_int(number, 8, 0);
	if (string == NULL)
		return (NULL);
	return (string);
}

/**
 * hex_conversion - Function that print hex number
 *
 * @number: Fetches the integer
 * @cap: Type Lower or Uppercase
 *
 * Return: The stringed hex
 */

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
