#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 * Return: Value 0 
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int start;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (start = 0; start < size; start++)
		arr[start] = c;
	return (arr);
}
