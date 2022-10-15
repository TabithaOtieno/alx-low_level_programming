#include <stdio.h>
/**
 * main - Print alphabet in lowercase, uppercase
 *
 * Return: 0
 */
int main(void)
{
	char i;

	/*Print lowercase letters*/
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	/*Print uppercase letters*/
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
