#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: the index, starting from 0.
 * @n: bit value.
 *
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index == sizeof(unsigned long int) * 0)
		return (0);

	if ((n & (1 << index)) == 0)
		return (0);
	return (-1);
}
