#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps thae valiues of two integers
 * @a: The fisrt integer to swap
 * @b: Second integer to swap
 * Return: Always (success)
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
