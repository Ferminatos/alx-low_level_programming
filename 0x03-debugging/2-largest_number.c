#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest, count = 0;

	if (a < 0)
		count++;
	if (b < 0)
		count++;
	if (c < 0)
		count++;
	if (count == 0)
	{
		if (a > b && b > c)
			largest = a;
		else if (b > a && a > c)
			largest = b;
		else
			largest = c;
	}
	else if (count == 1)
	{
		if (a < 0)
		{
			if (b > c)
				largest = b;
			else
				largest = c;
		}
		if (b < 0)
		{
			if (a > c)
				largest = a;
			else
				largest = c;
		}
		else
		{
			if (a > b)
				largest = a;
			else
				largest = b;
		}
	}
	return (largest);
}
