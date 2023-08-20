#include <stdarg.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char buffer[BUFFER_SIZE];
int buffer_index = 0;

/**
 * _printf - Function that print to stdout
 *
 * @format: Fetches the argument
 *
 * Return: The length of the string
 */
int save_to_buffer(char *string);
int handle_char(char s);
int _printf(const char *format, ...)
{
	va_list args;
	int i, j;
	int lenght = 0;
	char *string;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'd':
					string = _int(va_arg(args, int)); break;
				case 'i':
					string = _int(va_arg(args, int)); break;
				case 'o':
					string = oct(va_arg(args, unsigned int)); break;
				case 'x':
					string = hex(va_arg(args, unsigned int), 'x'); break;
				case 'X':
					string = hex(va_arg(args, unsigned int), 'X'); break;
				case 'b':
					string = binary(va_arg(args, unsigned int)); break;
				case 'c':
					string = print_char(va_arg(args, int)); break;
				case 's':
					string = print_string(va_arg(args, char *)); break;
				case '%':
					string = print_char('%'); break;
				case 'u':
					string = print_unsigned_int(va_arg(args, unsigned int));
			}
				j = save_to_buffer(string);
				lenght += j;
				free(string);

			if (format[i + 2] != '\0')
				i++;
		}
		else
		{
			handle_char(format[i]);
			lenght++;
		}
	}
	if (buffer_index > 0)
		write(1, buffer, buffer_index);

	return (lenght);
}
int handle_char(char c)
{
	char s[2];

	s[0] = c;
	s[1] = '\0';

	return (save_to_buffer(s)); 
}
int save_to_buffer(char *string)
{
	int j;
	int lenght = 0;
	for (j = 0; string[j] != '\0'; j++)
	{
		if (buffer_index == BUFFER_SIZE)
		{
			write(1, buffer, buffer_index);
			buffer_index = 0;
		}
		else
		{
			buffer[buffer_index] = string[j];
			buffer_index++;
		}
		lenght++;
	}
	return (lenght);
}
