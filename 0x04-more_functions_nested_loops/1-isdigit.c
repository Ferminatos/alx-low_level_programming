#include "main.h"

/**
 * _isdigit -  checks for a digit
 * @c: intger value to be checked
 * Return: 1 if it is a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
