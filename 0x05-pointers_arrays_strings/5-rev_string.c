#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string variable
 */

void rev_string(char *s)
{
	int l;
	int count;
	int index = 0;

	for (count = 0; s[count] != 0; count++)
	{

	}

	for (l = count - 1; l >= 0; l--)
	{
		s[index] = s[l];
		index++;
	}
}
