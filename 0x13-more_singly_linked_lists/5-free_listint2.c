#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 -  function that frees a listint_t list.
 * @head: points to this linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *counter;

	if (head == NULL)
	{
	return;
	}

	while (*head)
	{
		counter = (*head)->next;
		free(*head);
		*head = counter;
	}

	*head = NULL;
}
