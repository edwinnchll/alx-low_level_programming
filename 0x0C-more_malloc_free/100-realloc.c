
#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Allocates memory
 * @ptr: A pointer to the memory at start
 * @old_size: The size of ptr
 * @new_size: The size for new memory ptr
 * Return: If new_size == old_size - ptr.
 * If new_size == 0 and ptr is not NULL - NULL.
 * Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *pointer_cpy, *Concate;
	unsigned int start;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	pointer_cpy = ptr;
	mem = malloc(sizeof(*pointer_cpy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	Concate = mem;

	for (start = 0; start < old_size && start < new_size; start++)
		Concate[start] = *pointer_cpy++;

	free(ptr);
	return (mem);
}
