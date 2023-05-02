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
	listint_t *current_node, *temp, *num_t;
	unsigned int current_index = 0, leght = 0;

	if (head == NULL)
		return (NULL);
	current_node = *head;
	while (current_node != NULL)
	{
		current_node = current_node->next;
		leght++;
	}
	if (idx > leght + 1)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	current_node = *head;
	if (idx == 0)
	{
		temp->next = current_node;
		*head = temp;
		return (temp);
	}
	while (current_index < idx - 1)
	{
		current_node = current_node->next;
		if (current_node == NULL)
		{
			free(temp);
			return (NULL);
		}
		current_index++;
	}
	num_t = current_node->next;
	current_node->next = temp;
	temp->next = num_t;
	return (temp);
}
