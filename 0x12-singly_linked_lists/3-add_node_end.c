#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a first node
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: Null if error and address if right
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *multiple;
	int size;
	list_t *first, *last;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);

	multiple = strdup(str);
	if (str == NULL)
	{
		free(first);
		return (NULL);
	}

	for (size = 0; str[size];)
		size++;

	first->str = multiple;
	first->size = size;
	first->next = NULL;

	if (*head == NULL)
		*head = first;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = first;
	}

	return (*head);
}
