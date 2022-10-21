#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}

		else if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}

		else if (i % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}

		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}

	return (0);
}
