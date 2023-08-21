#include "main.h"

/**
 * print_char - Function that print char
 *
 * @c: Fetches the char to printed to standard output
 *
 * Return: Always 0 (on sucess);
 */

char *print_char(char c)
{
	char *string;

	string = malloc(sizeof(char) * 2);
	if (string == NULL)
	{
		free(string);
		return (0);
	}
	string[0] = c;
	if (string[0] == '\0')
		return (" ");
	string[1] = '\0';
	return (string);
}

/**
 * print_string - Function that print integer to standard output
 *
 * @s: Pointer that fetches the string arguement
 *
 * Return: The string to stardard.out
 */

char *print_string(char *s)
{
	char *string;
	int i;
	int lenght = 0;

	if (s == NULL)
		return (s = "(null)");
	for (i = 0; s[i] != '\0'; i++)
	{
		lenght++;
	}
	string = malloc(sizeof(char) * (lenght + 1));
	if (string == NULL)
	{
		free(string);
		return (0);
	}
	for (i = 0; i < lenght; i++)
	{
		string[i] = s[i];
	}
	string[lenght] = '\0';
	return (string);
}
