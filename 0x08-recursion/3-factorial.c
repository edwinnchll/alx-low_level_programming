#include "main.h"

/**
 * factorial- function for factorial
 * @n: number
 * Return: -1 when error and 1 when 0!
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
