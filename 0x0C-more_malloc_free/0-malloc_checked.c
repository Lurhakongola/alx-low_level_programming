#include "main.h"
/**
 * malloc_checked - allocate using mallovc
 * @b: number of men byte allocated
 * Return: void, pointer
 */
void *malloc_checked(unsigned int b)
{
	void *mem_ptr;

	mem_ptr = malloc(b);
	if (mem_ptr == NULL)
	{
	exit(98);
	}

	return (mem_ptr);
}
