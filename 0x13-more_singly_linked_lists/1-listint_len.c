#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 * in a list
 * @h: A pointer
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
