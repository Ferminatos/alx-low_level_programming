#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return
 */

void more_numbers(void)
{
	int c, i;

	for (c = 0; c < 10; c++)
	{
		i = 0;

		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
	}
}
