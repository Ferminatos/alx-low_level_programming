#include "main.h"

/**
 * times_table - Print the 9 times table, starting with 0
 * Return: 0
 *
 */

void times_table(void)
{
	int m = 0;
	int n, x;

	while (m < 10)
	{
		n = 0;
		while (n < 10)
		{
			x = m * n;

			if (x > 9)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}

			else if (n != 0)
			{
				_putchar(' ');
				_putchar(x + '0');
			}

			else
				_putchar(x + '0');

			if (n != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
		m++;
	}
}
