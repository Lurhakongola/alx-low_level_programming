#include <stdio.h>
/**
 * main- Everything inside of argiment
 * @argc: number of argument
 * @argv: The arrays that hold the value of argument
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}

	return (0);
}
