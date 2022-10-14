#include <stdio.h>

/**
 * main - Entry piont
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char c;

	for (num = 0; num < 10; num++)
		putchar("%i", num);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
