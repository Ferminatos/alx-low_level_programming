#include "main.h"

/**
 * print_square - prints a square
 * @size:  is the size of the square
 * Return
 */

void print_square(int size)
{
	while (size > 0)
	{
		_putchar('#');
		size--;
	}

	_putchar('\n');

	if (size <= 0)
		_putchar('\n');
}
