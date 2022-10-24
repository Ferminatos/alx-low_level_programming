#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: string variable
 */

void puts_half(char *str)
{
	int count, half;

	for (count = 0; str[count] != '\0'; count++)
	{

	}

	count++;

	for (half = count / 2; str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}

	_putchar('\n');


}
