
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Creates memory
 * @b: The number of bytes to be created
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *aa = malloc(b);

	if (aa == NULL)
		exit(98);

	return (aa);
}
