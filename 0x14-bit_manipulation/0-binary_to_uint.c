#include "main.h"
#include <string.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer  pointing to a string
 *
 * Return: return the converted number,
 * or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int convert_num = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] !=  '1')
			return (0);
		convert_num <<= 1;
		convert_num += b[i] - '0';
	}

	return (convert_num);
}
