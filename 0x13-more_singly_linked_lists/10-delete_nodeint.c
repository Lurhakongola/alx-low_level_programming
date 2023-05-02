#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the nodeof a listint_t linked list.
 * @head: head of the node pointer to the first node
 * @index: index of the node f the node that should be deleted
 * Return: 1 (succeeded), or -1(failed)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *num_t = *head;
	listint_t *current_node = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(num_t);
		return (1);
	}
	while (j < index - 1)
	{
		if (!num_t || !(num_t->next))
			return (-1);
		num_t = num_t->next;
		j++;
	}

	current_node = num_t->next;
	num_t->next = current_node->next;
	free(current_node);

	return (1);
}
