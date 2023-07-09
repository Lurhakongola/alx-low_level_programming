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
	int temp = 0;


	unsigned long int count = n ^ m;

	while (count != 0)
	{
		if (count & 1)
			temp++;
		count >>= 1;
	}

	return (temp);
}
