#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len -  function that returns number of element of linked list
 * @h: header of the linked list
 * Return: return number of element in linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t A = 1;
	 listint_t *p =
		 (listint_t *)h;

	while (p != NULL)
	{

		p = p->next;
	 A++;

	}
	return (A);

}


