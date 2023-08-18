#include <stdarg.h>
#include "main.h"

/**
 * _printf - Function that print to stdout
 *
 * @format: Fetches the argument
 *
 * Return: The length of the string
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 's':
					print_string(va_arg(args, char *));
					break;
				case 'c':
					print_char(va_arg(args, int));
					break;
				case '%':
					print_char('%');
					break;
			}
		}
		else
			print_char(format[i]);
	}
}
