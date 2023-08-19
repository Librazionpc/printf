#include <unistd.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>


/**
 * print_char - print character
 * @c: the character to be printed
 *
 *Return: 0 on success
 */

int print_char(char c)
{
	write(1, &c, 1);
	return (0);
}
/**
 * print_string - print string using write function
 * @s: a pointer to the string to print
 *
 * Return: 0 on success
 */

int print_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		write(1, &s[i], 1);
	}
	return (0);
}

/**
 *
 *
 *
 *
 *
 */

char *print_int( int num, int base, int capital)
{
	char *string;
	unsigned int mul = 1;
	int remainder = 0;
	int lenght = 1, i = 0;
	char character;
	if (num < 0)
	{
		num = -num;
		print_char('-');
	}
	if (num > base)
	{
		while ((num / mul) > base)
		{
			mul *= base;
			lenght++;
		}
		string = malloc(sizeof(char) * (lenght +1));
		string[i] = (num / mul) + '0';
		i++;
		while (mul >= base)
		{
			mul /= base;
			remainder = (num / mul) % base;
			if (remainder > 10)
			{
				if (capital == 0)
					character = (remainder - 10) + 'a';
				else if (capital == 1)
					character = (remainder - 10) + 'A';
			}
			else
				character = (remainder + '0');
			string[i] = character;
			i++;
		}
	}
	else
	{
		string = malloc(sizeof(char) * (lenght + 1));
		if (num > 10)
		{
			if (capital == 0)
				string[0] = (num - 10) + 'a'; 
			else if (capital == 1)
				string[0] = (num - 10) + 'A';
		}
		else
			string[0] = num + '0'; 
	}
	string[lenght] = '\0';
	return (string);
}
