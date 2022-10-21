#include "main.h"

/**
 * print_square - prints a square
 * @size:  is the size of the square
 * Return
 */

void print_square(int size)
{
	int i, c;

	i = 0;
	c = size;

	if (c <= 0)
		_putchar('\n');

	else
	{
		while (i < c)
		{
			while (size > 0)
			{
				_putchar('#');
				size--;
			}
			_putchar('\n');
			size = c;
			i++;
		}
	}
}
