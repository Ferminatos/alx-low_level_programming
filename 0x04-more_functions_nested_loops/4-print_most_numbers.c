#include "main.h"

/**
 * print_most_numbers -  prints the numbers, from 0 to 9 but not 2 and 4.
 * Return
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		switch (c)
		{
			case '2':
				continue;
			case '4':
				continue;
			default:
				_putchar(c);
				break;
		}
	}
	_putchar('\n');
}
