#include "main.h"
/**
*print_rev - prints a string in reverse
*@s: string being printed
*/

void print_rev(char *s)
{
	int length = 0, i;

	while (s[i++])
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');	
}
