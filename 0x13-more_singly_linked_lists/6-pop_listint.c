#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t.
 * @head: pointer to the linked listint_t.
 * Return: returns the head node's data (n)
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (*head == NULL)
{
return (0);
}

temp = (*head)->next;
n = (*head)->n;

free(*head);
*head = temp;

return (n);

}

