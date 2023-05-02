#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr_node, *temp;
	size_t count = 0;

	if (head == NULL)
	{
		exit(98);
	}

	curr_node = head;

	while (curr_node != NULL)
	{
		printf("[%p] %d\n", (void *)curr_node, curr_node->n);
		count++;
		temp = curr_node;
		curr_node = curr_node->next;

		if (temp < curr_node)
		{
			printf("-> [%p] %d\n", (void *)curr_node, curr_node->n);
			break;
		}
	}
	return (count);
}
