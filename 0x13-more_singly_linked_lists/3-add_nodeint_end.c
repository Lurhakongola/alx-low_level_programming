#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds node at the end of the linked list.
 * @n: Value of the new node to add at the end of list.
 * @head: pointer to the first node
 * Return: the address of the new element, or NULL if it failed
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *B = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (B->next != NULL)
	{
		B = B->next;
}
B->next = new;
return (new);
}
