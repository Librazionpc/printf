#include <unistd.h>
#include <stdarg.h>


/**
 *
 *
 *
 *
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
