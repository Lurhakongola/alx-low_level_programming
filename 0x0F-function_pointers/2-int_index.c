#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @cmp: pointer to the function to be used to compare values
 * @size: number of elements in array
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	while (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}

