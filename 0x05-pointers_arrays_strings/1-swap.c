#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: integer variable one
 * @b: integer variable two
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
