#include "main.h"
#include <stdio.h>

int print_buffer(char *buffer, unsigned int *buffer_index, char *string);
/**
 * _printf - Function that print to tandard.out
 * @format: Fetches the from va_args
 *
 * Return: The lenght
 */

int _printf(const char *format, ...)
{
	char buffer[BUFFER_SIZE], spec;
	unsigned int buffer_index = 0;
	int i;
	va_list args;
	int lenght = 0;
	char *string;

	va_start(args, format);
	if (format == NULL || *format == '\0')
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			spec = format[i];
			if (spec == 's')
			{
				string = get_string_str(va_arg(args, char *));
			}
			else if (spec == 'c' || spec == 'u' || spec == 'i' || spec == 'd'
					|| spec == 'o' || spec == 'x' || spec == 'X' || spec == 'b'
					|| spec == '%')
			{
				string = get_string(spec, va_arg(args, int));
			}
			else
			       return (-1);	
		}
		else
		{
			string = print_char(format[i]);
		}
		if (string == NULL)
			return (-1);
		lenght += print_buffer(buffer, &buffer_index, string);
	}
	if (buffer_index > 0)
		write(1, buffer, buffer_index);
	va_end(args);
	return (lenght);
}

/**
 * print_buffer - Function that creates 1024 bytes of spaces for _printf
 *
 * @buffer: Fectches the macro buffer
 * @buffer_index: The position of the array
 * @string: The string to be calculated
 *
 * Return: The length of the string
 */

int print_buffer(char *buffer, unsigned int *buffer_index, char *string)
{
	int i;
	int lenght = 0;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (*buffer_index == BUFFER_SIZE)
		{
			write(1, buffer, *buffer_index);
			*buffer_index = 0;
			buffer[*buffer_index] = string[i];
			*buffer_index += 1;
		}
		else
		{
			buffer[*buffer_index] = string[i];
			*buffer_index += 1;
		}
		lenght++;
	}
	free(string);
	return (lenght);
}
