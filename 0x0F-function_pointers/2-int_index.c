#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 * Return: If no element matches or size <= 0 - -1.
 * Otherwise - The index of the first element for which
 * the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int start;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (start = 0; start < size; start++)
	{
		if (cmp(array[start]) != 0)
			return (start);
	}
	return (-1);
}
