#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 */

int print_char(char c)
{
	write(1, &c, 1);
	return(0);
}
