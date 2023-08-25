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
		return (NULL);
	}
	string[0] = c;
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
		return (NULL);
	}
	for (i = 0; i < lenght; i++)
	{
		string[i] = s[i];
	}
	string[lenght] = '\0';
	return (string);
}

/**
 * print_string_ - print a string and represent all non printable characters
 * with \xand its ascii value in hexadecimal
 * @s: a pointer to the string
 *
 * Return: the new string
 */

char *print_string_(char *s)
{
	int i, j = 0, k, lenght = 0;
	char *string, *hex;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
			lenght += 4;
		else
			lenght++;
	}
	string = (char *)malloc(sizeof(char) * (lenght + 1));
	if (string == NULL)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			string[j] = '\\';
			j++;
			string[j] = 'x';
			hex = hex_conversion(s[i], 'X');
			if (strlen(hex) < 2)
			{
				j++;
				string[j] = '0';
			}
			for (k = 0; hex[k] != '\0'; k++)
			{
				j++;
				string[j] = hex[k];
			}
			free(hex);
		}
		else
			string[j] = s[i];
		j++;
	}
	string[j] = '\0';
	return (string);
}
