#include "main.h"
#include <stdio.h>

/**
 * _printf - Function that print to tandard.out
 * @format: Fetches the from va_args
 *
 * Return: The lenght
 */
int print_buffer(char *buffer, int *buffer_index, char *string)
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
			*buffer_index++; 
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
int _printf(const char *format, ...)
{
	char buffer[BUFFER_SIZE];
	unsigned int buffer_index = 0;
	int i;
	va_list args;
	int lenght = 0;
	char *string;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
			switch (format[i + 1])
			{
				case 'c':
					string = print_char(va_arg(args, int));
					i++;
					break;
				case 's':
					string = print_string(va_arg(args, char *));
					i++;
					break;
				case '%':
					string = print_char('%');
					i++;
					break;
				case 'd':
					string = _int(va_arg(args, int));
					i++;
					break;
				case 'i': 
					string =  _int(va_arg(args, int));
					i++;
					break;
				case 'u':
					string = _unsigned_int(va_arg(args, int));
					i++;
					break;
				case 'o':
					string = oct_conversion(va_arg(args, int));
					i++;
					break;
				case 'x':
					string = hex_conversion(va_arg(args, int), 'x');
					i++;
					break;
				case 'X':
					string = hex_conversion(va_arg(args, int), 'X');
					i++;
					break;
				case 'b':
					string = binary_conversion(va_arg(args, int));
					i++;
					break;
			}
			}
			else
				print_char('%');
			}
		else
		{
			string = print_char(format[i]);
		}
		lenght += print_buffer(buffer, &buffer_index, string);
	}
	if (buffer_index > 0)
		write(1, buffer, buffer_index);
	va_end(args);
	return (lenght);
}
