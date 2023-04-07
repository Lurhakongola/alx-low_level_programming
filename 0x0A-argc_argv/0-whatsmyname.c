#include <stdio.h>
/**
 * main- prints its name, followed by a new
 * @argc: number of argiment
 * @argv: the array argiment
 *
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
