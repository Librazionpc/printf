#include "main.h"
#include <unistd.h>

/**
 * print_char - Function that print char
 *
 * @c: Fetches the char to printed to standard output
 *
 * Return: Always 0 (on sucess);
 */

int print_char(char c)
{
	write(1, &c, 1);
	return (0);
}

/**
 * print_string - Function that print integer to standard output
 *
 * @s: Pointer that fetches the string arguement
 *
 * Return: The string to stardard.out
 */

int print_string(char *s)
{
	int i;
	int lenght = 0;

	for (i = 0; s[i] == '\0'; i++)
	{
		write(1, &s[i], 1);
		lenght++;
	}
	return (0);
}
