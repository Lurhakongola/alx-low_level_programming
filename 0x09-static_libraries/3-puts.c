#include "main.h"
#include <string.h>
/**
 * _puts - prints string
 * @str:pointer arguments
 * Return: always (success)
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{

	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
