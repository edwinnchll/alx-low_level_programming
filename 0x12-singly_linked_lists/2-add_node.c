#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a first node at the beginning
 * @head: A pointer to the head of the list
 * @str: The string to be added to the list
 * Return: Null when Error
 */

list_t *add_node(list_t **head, const char *str)
{
	char *multiple;
	int len;
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

	for (len = 0; str[len];)
		len++;

	first->str = multiple;
	first->len = len;
	first->next = *head;

	*head = first;

	return (first);
}
