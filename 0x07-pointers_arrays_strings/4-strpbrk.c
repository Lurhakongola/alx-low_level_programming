#include  "main.h"
/**
 * _strpbrk - Entry point
 * @s:input
 * @accept: input
 * Return: Alwas 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
				return (s);
			s++;
		}
		return ('\0');
}
