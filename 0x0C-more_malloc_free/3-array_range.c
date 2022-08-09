#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of from min to max
 * @min: initial value of array
 * @max: fanal value of array
 * Return: Returns maximum or minimum else 0
 */
int *array_range(int min, int max)
{
	int *array, start, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);

	for (start = 0; start < len; start++)
		array[start] = min++;

	return (array);
}
