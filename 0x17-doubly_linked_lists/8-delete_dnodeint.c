#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * in a dlistint_t linked list.
 *
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (index > 0 && current)
	{
		current = current->next;
		index--;
	}

	if (!current)
		return (-1);

	if (current->prev)
		current->prev->next = current->next;

	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
