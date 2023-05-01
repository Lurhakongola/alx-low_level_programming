#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - the function frees a listint_t list.
 * @head: The listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{

		p = head;
		head = head->next;
		free(p);

	}
}
