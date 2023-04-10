#include <stdio.h>
/**
 * main- prints its name, followed by a new
 * @argc: number of argiment
 * @argv: the array argiment
 *
 * Return: Always 0 (success)
 */
int main(int argv __attribute__((unused)), char *argc[])
{
	printf("%s\n", *argc);
	return (0);
}
