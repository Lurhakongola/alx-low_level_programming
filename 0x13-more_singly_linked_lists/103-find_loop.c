#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: linken list to be find
 *
 * Return: The address of the node where the loop starts, or NULL
 *
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p = head;
	listint_t *fast_p = head;

	if (head == NULL)
		return (NULL);
	while (slow_p && fast_p && fast->next)
	{
		fast_p = fast_p->next->next;
		slow_p = slow->next;
		if (fast_p == slow_p)
		{
			slow_p = head;
			while (slow_p != fast_p)
			{
				slow_p = slow_p->next;
				fast_p = fast_p->next;
			}
			return (fast_p);
		}
	}

	return (NULL);
}
