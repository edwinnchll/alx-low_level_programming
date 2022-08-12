#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 * @head: A pointer the head of the list
 * @str: The string to be added to the list
 * Return: Null when Error
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int size;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (size = 0; str[size];)
		size++;

	new->str = dup;
	new->size = size;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
