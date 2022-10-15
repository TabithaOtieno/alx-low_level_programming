#include <stdio.h>
/**
 * main - print all numbers of base 16 in lowecase
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char x;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
