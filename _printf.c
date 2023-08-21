#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * _printf - Function that print to tandard.out
 * @format: Fetches the from va_args
 *
 * Return: The lenght
 */

int _printf(const char *format, ...)
{
	int i;
	va_list args;
	int lenght = 0;

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
					print_char(va_arg(args, int));
					lenght++; i++;
					break;
				case 's':
					lenght += print_string(va_arg(args, char *));
					i++;
					break;
				case '%':
					print_char('%');
					lenght++; i++;
					break;
				case 'd':
					lenght += _int(va_arg(args, int));
					i++;
					break;
				case 'i': 
					lenght +=  _int(va_arg(args, int));
					i++;
					break;
				case 'u':
					lenght += _unsigned_int(va_arg(args, int));
					i++;
					break;
				case 'o':
					lenght += oct_conversion(va_arg(args, int));
					i++;
					break;
				case 'x':
					lenght += hex_conversion(va_arg(args, int), 'x');
					i++;
					break;
				case 'X':
					lenght += hex_conversion(va_arg(args, int), 'X');
					i++;
					break;
				case 'b':
					lenght += binary_conversion(va_arg(args, int));
					i++;
					break;
			}
			}
			else
				print_char('%');
			}
		else
		{
			print_char(format[i]);
			lenght++;
		}
	}
	va_end(args);
	return (lenght);
}
