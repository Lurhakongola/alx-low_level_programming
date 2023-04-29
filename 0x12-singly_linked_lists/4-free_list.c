#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_list -  function that frees a list_t list
 * @head: head of the linked list
 */

void free_list(list_t *head)
{
	list_t *my_node;

	while ((my_node = head) != NULL)
	{
		head = head->next;
		free(my_node->str);
		free(my_node);
		head = my_node;
	}
}
