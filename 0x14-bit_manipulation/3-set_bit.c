#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: A pointer to that bit
 * @index: index of the bit
 *
 * Return: if an errer occurs 1.
 * Otherwise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
