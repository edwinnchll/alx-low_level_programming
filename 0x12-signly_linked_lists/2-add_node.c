#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a first node at the beginning
 * @head: A pointer to the head of the list
 * @str: The string to be added to the list
 * Return: Null if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	char *multiple;
	int size;
	list_t *first;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);

	multiple = strdup(str);
	if (multiple == NULL)
	{
		free(first);
		return (NULL);
	}

	for (size = 0; str[size];)
		size++;

	first->str = multiple;
	first->size = size;
	first->next = *head;

	*head = first;

	return (first);
}
