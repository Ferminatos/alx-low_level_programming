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
	int largest, *pa, *pb, *pc;

	pa = &a;
	pb = &b;
	pc = &c;

	if (*pa >= *pb && *pa >= *pc)
		largest = *pa;
	else if (*pb >= *pa && *pb >= *pc)
		largest = *pb;
	else
		largest = *pc;

	return (largest);
}
