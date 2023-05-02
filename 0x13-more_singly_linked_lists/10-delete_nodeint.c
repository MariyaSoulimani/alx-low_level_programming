#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position in the list
 * @head: double pointer to the first node of the list
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *curr_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		curr_node = *head;
		*head = (*head)->next;
		free(curr_node);
		return (1);
	}
	curr_node = *head;
	for (i = 1; curr_node != NULL && i < index; i++)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
	}
	if (curr_node == NULL)
		return (-1);
	prev_node->next = curr_node->next;
	free(curr_node);

	return (1);
}
