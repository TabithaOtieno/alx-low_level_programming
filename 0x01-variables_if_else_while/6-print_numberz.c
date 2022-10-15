#include <stdio.h>
/**
 * main - print single digits base 10 staring from 0
 * using only putchar and no char variables
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	putchar('\n');
	return (0);
}
