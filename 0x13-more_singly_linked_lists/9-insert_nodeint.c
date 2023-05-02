#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: head of the node
 * @idx: index where to insert new node
 * @n: value to insert as new node
 * Return: return the adress of new node or NULL if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node, *temp;
	unsigned int current_index = 0;

	if (head == NULL || *head == NULL)
		return (NULL);

	current_node = *head;

	while (current_node != NULL && current_index < idx - 1)
	{
		current_node = current_node->next;
		current_index++;

	}

	if (current_node == NULL)
		return (NULL);

	temp = malloc(sizeof(*temp));
	if (temp == NULL)
	return (NULL);

	temp->n = n;
	temp->next = current_node->next;
	current_node->next = temp;

	return (temp);
	}

