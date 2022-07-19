#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- prints the sum of the two diagonals
 * @a: string to print
 * @size: size of the string
 */

void print_diagsums(int *a, int size)
{
	int start, sum = 0, sum1 = 0;

	for (start = 0; start < size; start++)
	{
		sum += a[start];
		a += size;
	}
	a -= size;
	for (start = 0; start < size; start++)
	{
		sum1 += a[start];
		a -= size;
	}
	printf("%d, %d\n", sum, sum1);
}
