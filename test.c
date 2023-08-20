#include "main.h"
#include <stdio.h>

int main(void)
{
	int len1 = _printf("%s");
	int len2 = printf("%c %c %c\n", 'C', 'A', 'B');
	printf("len1: %d, len2: %d\n", len1, len2);
	return (0);
}
