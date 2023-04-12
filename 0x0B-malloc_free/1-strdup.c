#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: Pointer to our new string
 * Return: Returns NULL if str = NULL, returns NULL if insufficient memory
 */
char *_strdup(char *str)
{
	size_t i, len;
	char *tstr;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	tstr = (char *)malloc(sizeof(char) * (len + 1));

	if (tstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		tstr[i] = str[i];
	}

	tstr[i] = '\0';

	return (tstr);
}
