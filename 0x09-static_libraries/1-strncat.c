#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0' && n > 0; j++)
	{
		dest[i] = src[j];
		i++;
		n--;
	}

	return (dest);
}
