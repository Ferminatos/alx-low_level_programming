#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 * @s: string variable
 */

void print_rev(char *s)
{
	int l;
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
	}

	for (l = count - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}
