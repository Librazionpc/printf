#include "main.h"
#include <stdlib.h>

char handle_cap(int capital, int num);
/**
 * print_int - function that convert integers
 * @base: Fetches the argument base of the to coverted to
 * @_case: Fetches if it uppercase or lowercase
 * @num: fetches the integer to converted
 *
 * Return: The int has covert string
 */

char *print_int(unsigned int num, unsigned int base, int _case)
{
	char *string;
	unsigned int mul = 1, remainder = 0, lenght = 1, i = 0, is_negative = 0;
	char character;

	if (_case == 2)
	{
		is_negative = 1;
		lenght++;
	}
	if (num >= base)
	{
		while ((num / mul) >= base)
			{mul *= base;
			 lenght++;
			}
		string = malloc(sizeof(char) * (lenght + 1));
		if (string == NULL)
			return (NULL);
		if (is_negative)
		{
			string[i] = '-';
			i++;
		}
		if ((num / mul) >= 10)
			character = handle_cap(_case, (num / mul));
		else
			character = (num / mul) + '0';
		string[i] = character;
		i++;
		while (mul >= base)
		{
			mul /= base;
			remainder = (num / mul) % base;
			if (remainder >= 10)
			{
				character = handle_cap(_case, remainder);
			}
			else
				character = remainder + '0';
			string[i]  = character;
			i++;
		}
	}
	else
	{
		string = malloc(sizeof(char) * (lenght + 1));
		if (string == NULL)
			return (NULL);
		if (num >= 10)
			string[0] = handle_cap(_case, num);
		else
			string[0] = num + '0';
	}
	string[lenght] = '\0';
	return (string);
}
/**
 * handle_cap - handle capital conversion for hexadecimal
 * @capital: if the result should be in capital
 * @num: the number to convert
 *
 * Return: the character
 */

char handle_cap(int capital, int num)
{
	char s;

	if (capital == 0)
		s = (num - 10) + 'a';
	else if (capital == 1)
		s = (num - 10) + 'A';
	return (s);
}
