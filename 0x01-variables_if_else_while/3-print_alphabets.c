#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
		upper = toupper(lower);
		putchar(upper);
	}

	putchar('\n');

	return (0);
}
