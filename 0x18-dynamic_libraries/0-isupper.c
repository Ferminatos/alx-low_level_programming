#include "main.h"

/**
 * _isupper- a function that checks for uppercase character.
 * @c : intger value of an alphabet.
 * Return: 1 if Uppercase or 0 if not
 *
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
