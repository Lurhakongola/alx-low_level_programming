#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds node at the end of the linked list
 * @str: sting to store in the list
 * @head: pointer to the list-t
 * Return: return the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
		{
		list_t *new_node, *end_node;
		size_t temp;

		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		return (NULL);

		new_node->str = strdup(str);
		for (temp = 0; str[temp]; temp++)
			;

		 new_node->len = temp;
		 new_node->next = NULL;
		 end_node = *head;

if (end_node == NULL)
{
*head = new_node;
}
else
{
while (end_node->next != NULL)
end_node = end_node->next;
end_node->next = new_node;
}
	return (*head);
}

