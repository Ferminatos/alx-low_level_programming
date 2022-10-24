#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string variable
 */

void rev_string(char *s)
{
	int l, count, index = 0;
	char h;

	for (count = 0; s[count] != 0; count++)
	{

	}

	l = count;

	for (count--; index < l / 2; count--)
	{
		h = s[index];
		s[index] = s[count];
		s[count] = h;
		index++;
	}
}
