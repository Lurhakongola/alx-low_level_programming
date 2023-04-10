#include <stdio.h>
/**
 * main- prints number of aguments, followed by a new
 * @argc: number of argument
 * @argv: The arrays that hold the value of argument
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
