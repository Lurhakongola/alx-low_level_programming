#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @size: number of elem to print
 * @action: pointer
 * @array: array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == 0 || action == 0)
		return;

	for (i = 1; i < size; i++)
	{
		action(array[i]);
	}
}

