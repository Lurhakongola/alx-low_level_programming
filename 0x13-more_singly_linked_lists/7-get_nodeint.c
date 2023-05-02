#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of nodes in the list.
 * @index: index of the nod.
 * Return: retun NULL if node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp  = head;
unsigned int j = 0;

	while (temp != NULL && j < index)
	{
		temp = temp->next;
	j++;
	}
	if (temp == NULL)
		return (NULL);

return (temp);
}
