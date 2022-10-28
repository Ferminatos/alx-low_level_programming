#include "main.h"

/**
 * print_number -  prints an integer oly using _putchar
 * @n: integer
 */

void print_number(int n)
{
	int power;
	int neg;
	int num;

	neg = 0;
	power = 1;
	num = n;

	if (n < 0)
	{
		_putchar('-');
		neg = 1;
	}
	while (num > 9 || num < -9)
	{
		power *= 10;
		num /= 10;
	}
	while (power > 0)
	{
		if (power > 9)
		{
			if (!neg)
				_putchar((n / power % 10) + '0');
			else
				_putchar((n / power % 10) * -1 + '0');

			power /= 10;
		}
		if (power == 1)
		{
			if (neg)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');

			power = 0;
		}
	}
}
