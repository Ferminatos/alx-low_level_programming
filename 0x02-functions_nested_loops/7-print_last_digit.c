#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */

int print_last_digit(int n)
{
	int lr;

	if (n < 0)
	{
		lr = -1 * (n % 10);
		_putchar(lr + '0');
		return (lr);
	}

	else
	{
		lr = n % 10;
		_putchar(lr + '0');
		return (lr);
	}
}
