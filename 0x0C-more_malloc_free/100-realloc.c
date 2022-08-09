#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Allocates space with malloc and free
 * @pointer: A pointer to the memory previously allocated.
 * @old_size: The size of old memory
 * @new_size: The size for new memory
 * Return: 0 when error
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	char *pointer_cpy, *Concate;
	unsigned int start;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memory = malloc(new_size);

		if (memory == NULL)
			return (NULL);

		return (memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	pointer_cpy = ptr;
	memory = malloc(sizeof(*pointer_cpy) * new_size);

	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	Concate = memory;

	for (start = 0; start < old_size && start < new_size; start++)
		Concate[start] = *pointer_cpy++;

	free(ptr);
	return (memory);
}
