#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: A pointer to first node.
 *
 * Return: return the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	int num;
	listint_t *fast;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		num = *h - (*h)->next;
		if (num > 0)
		{

		fast = (*h)->next;
		free(*h);
		*h = fast;
		counter++;

	}
	else
	{
		free(*h);
		*h = NULL;
		counter++;
		break;
	}

}
*h = NULL;
return (counter);
}
