#include <stdio.h>

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 **/

int get_endianness(void)

{
	unsigned int num = 1;
	char* byte = (char *)&num;

	return ((int)*byte);
}
int main()
{
	int endianness = get_endianness();

	if (endianness == 0)
	{
		printf("high  Endian\n");
	}
	else
	{printf("lower Endian\n");
	}

	return (0);

}
