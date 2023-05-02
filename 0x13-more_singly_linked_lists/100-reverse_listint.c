#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a listiunt_t list.
 * @head: head ponts to thre fist node
 * Return: returns a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next = NULL;
	listint_t *current;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev_node;

		prev_node = current;
		current = next;
	}
	return (prev_node);

}
