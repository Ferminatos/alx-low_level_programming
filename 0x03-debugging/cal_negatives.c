#include "main.h"

/**
 *
 *
 */

int cal_negatives(int count, int a, int b, int c)
{
	int largest;

	if (count == 1)
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
	else if (count == 2)
	{
		/* 2 of the numbers are negative*/
	}
	else
	{
		/* 3 of the numbers are negative*/
	}

	return(largest);
}
