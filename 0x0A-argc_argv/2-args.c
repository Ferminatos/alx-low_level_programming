#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints all arguments it receives
 * @argc: count of arguments
 * @argv: array of pointers to the strings
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	while (argc > 0)
	{
		printf("%s\n", *argv++);
		argc--;
	}

	return (0);
}
