
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer
 * @str: The string
 * Return: Null if not available
 */
char *_strdup(char *str)
{
	char *copy;
	int start, size = 0;

	if (str == NULL)
		return (NULL);
	for (start = 0; str[start]; start++)
		size++;
	copy = malloc(sizeof(char) * (size + 1));
	if (copy == NULL)
		return (NULL);
	for (start = 0; str[start]; start++)
		copy[start] = str[start];
	copy[size] = '\0';
	return (copy);
}
