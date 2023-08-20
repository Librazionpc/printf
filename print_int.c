#include "main.h"
#include <stdlib.h>

int _int(int number)
{
	char *string;
	unsigned int lenght;
	int _case = 0;
	if (number < 0)
	{
		number = -number;
		_case = 2;
	}
	string = print_int(number, 10, _case);
	lenght  = print_string(string);
	free(string);
	return (lenght);
}
