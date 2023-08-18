#include <unistd.h>
#include "main.h"
#include <stdarg.h>


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
