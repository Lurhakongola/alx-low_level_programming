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
	unsigned int dec_val = 0;

	if (b == NULL)
	{
		return (0);
	}

	int length = strlen(b);
	for (int i = 0; i < length; i++)
		;
	{
		dec_val *= 2;
		dec_val += (b[i] - '0');
				}
				return (dec_val);
				}
