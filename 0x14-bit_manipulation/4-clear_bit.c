#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: Apointer to the number to be changed
 * @index: index of the bit to be cleared
 *
 *
 * Return: return 1 for success, and -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
	return (-1);

	*n = (~(1UL << index) & *n);
	return (1);

	}
