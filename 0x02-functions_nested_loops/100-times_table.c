#include "main.h"
/**
*print_times_table - print the n times table
*@n: integer times table eing printed
*/
void print_times_table(int n)
{
	if (n > 15 || n <  0)
	{

	}
	else
	{
		int x, y, z;

		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				z = x * y;
				if (z <= 9)
					_putchar(' ');
				else
					_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
		_putchar('\n');
		}
	}
}
