#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - function that reverses a listiunt_t list.
 * @head: head ponts to thre fist node
 * Return: returns a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next = NULL;

	if (*head == NULL || head == NULL)
	{
		return (NULL);
	}

	next = *head;

	while (next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev_node;

		prev_node = *head;
		*head = next;
	}
	*head = prev_node;

	return (*head);

}
