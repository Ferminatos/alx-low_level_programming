#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 * Return
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		i = 0;

		while (i < n)
		{
			_putchar('\\');
			i++;
		}
		_putchar('\n');
	}
}
