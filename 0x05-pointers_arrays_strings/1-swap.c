#include "main.h"

/**
 * swap_intt - swaps thae valiues of two integers
 *
 * @a: The fisrt integer to swap
 * @b: Second integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
