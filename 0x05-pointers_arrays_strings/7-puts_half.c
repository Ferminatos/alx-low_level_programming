#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: string variable
 */

void puts_half(char *str)
{
	int count, l, half;

	for (count = 0; str[count] != '\0'; count++)
	{

	}

	if ((count - 1) % 2 != 0)
		l = count;
	else
		l = count - 1;

	for (half = l / 2; half <= l; half++)
	{
		_putchar(str[half]);
	}

	_putchar('\n');


}
