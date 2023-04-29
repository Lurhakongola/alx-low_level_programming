#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beggining of a linked list
 * @str: value to insert into element
 * @head: head of a list_t list
 * Return: return the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int count = 0;

	new = malloc(sizeof(list_t));
	if (new  == NULL)
		return (NULL);
	while (str[count])
		count++;

	new->len = count;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
