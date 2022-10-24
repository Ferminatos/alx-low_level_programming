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

	for (l = count - 1; index < l / 2; l--)
	{
		h = s[index];
		s[index] = s[l];
		s[l] = h;
		index++;
	}


}
