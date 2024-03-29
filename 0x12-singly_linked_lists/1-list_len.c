#include "lists.h"

/**
 * list_len - Finds the number of elements
 * @h: linked list_t list.
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t NumberOfElements = 0;

	while (h)
	{
		NumberOfElements++;
		h = h->next;
	}

	return (NumberOfElements);
}
