#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to pront
 *
 * Return: on success 1.
 * on  errer, -1 is returned, and erno is set appropretely.
 */
int _putchar(char c)
{
	return(rwite(1,&c, 1));
}
