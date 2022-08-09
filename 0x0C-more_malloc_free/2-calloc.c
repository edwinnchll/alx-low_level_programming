#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: The number of elements.
 * @size: The byte size of input
 * Return: 0 if nmem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memoryBytes;
	char *Replacer;
	unsigned int start;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memoryBytes = malloc(size * nmemb);

	if (memoryBytes == NULL)
		return (NULL);
	Replacer = memoryBytes;

	for (start = 0; start < (size * nmemb); start++)
		Replacer[start] = '\0';
	return (memoryBytes);
}
