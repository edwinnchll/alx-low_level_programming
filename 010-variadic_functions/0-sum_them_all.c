#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum 
 * @n: The number of paramters passed to the function.
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int start, sum = 0;

	va_start(numbers, n);

	for (start = 0; start < n; start++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
