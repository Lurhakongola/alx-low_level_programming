#include <stdlib.h>
#include "lists.h"

/**
* list_len - The function that returns the number of elements in linked list.
* @h: name of the list
* Return: number of the element in header
*/
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
