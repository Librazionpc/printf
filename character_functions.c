#include <unistd.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * print_char - print character
 * @c: the character to be printed
 *
 *Return: 0 on success
 */

char *print_char(char c)
{
	char *s; 

	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (0);
	s[0] = c;
	s[1] = '\0';
	return (s);	
}
/**
 * print_string - print string using write function
 * @s: a pointer to the string to print
 *
 * Return: 0 on success
 */

char *print_string(char *s)
{
	return (s);
}

/**
 * print_int  - convert an integer in a particular base to string
 * @num: the number to convert
 * @base: the base to convert the number to
 * @capital: catches when the base is 16 and in uppercase
 *
 * Return: the string it is converted to
 */
char handle_cap(int, int);
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
