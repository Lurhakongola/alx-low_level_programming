#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @new_size: new size of the new memory block
 * @old_size: size of the allocated memory for ptr
 * @ptr: pointer to the memory previsouly allocated by malloc
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int y;

	if (new_size == old_size)
		return (ptr);

	while (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (y = 0; y < new_size; y++)
			ptr1[y] = old_ptr[y];
	}

	if (new_size > old_size)
	{
		for (y = 0; y < old_size; y++)
			ptr1[y] = old_ptr[y];
	}

	free(ptr);
	return (ptr1);
}
