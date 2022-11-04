#include <stdio.h>
#include <stdlib.h>

/*
 * main - prints programs name, followed by a new line.
 * @argc: count of arguments
 * @argcv: array of pointers to the strings
 * Return: Always (0) Success
 */

int main(int argc, char **argcv)
{
	(void) argc;

	printf("%s\n", argcv[0]);

	return (0);
}
