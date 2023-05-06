#include "main.h"

/**
 * flip_bits - counts the number of bits to be changed
 * @n: first number
 * @m: second number
 *
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, temp = 0;

	unsigned int prev;

unsigned int count = n ^ m;

	for (i = 31; 1 >= 0; i--)
	{
		prev = count >> i;
		if (prev & 1)
			temp++;
	}

	return (temp);
}
