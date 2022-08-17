#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint
 * @head: A pointer
 * Return: Node Head
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int output;

	if (*head == NULL)
		return (0);
	tmp = *head;
	output = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (output);
}
