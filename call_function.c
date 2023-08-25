#include "main.h"


char *get_string_str(char *value, char spec)
{
	char *string;

	if (value == NULL)
		return (NULL);
	if (spec == 's')
		string = print_string(value);
	else if (spec == 'S')
		string = print_string_(value);
	return (string);
}

char *get_string(char spec, int value)
{
	char *string;

	if (spec == 'c')
	{
		string = print_char(value);
	}
	else if (spec == 'd' || spec == 'i')
		string = _int(value);
	else if (spec == 'x' || spec == 'X')
		string = hex_conversion(value, spec);
	else if (spec == 'o')
		string = oct_conversion(value);
	else if (spec == 'b')
		string = binary_conversion(value);
	else if (spec == 'u')
		string = _unsigned_int(value);
	else if (spec == '%')
		string = print_char('%');
	return (string);
}
