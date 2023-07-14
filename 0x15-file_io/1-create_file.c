#include "main.h"

/**
 * create_file - Function to reates a file.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to a string.
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int pd, len, w = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (w = 0; text_content[w];)
			w++;
	}

	pd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	len = write(pd, text_content, w);

	if (pd == -1 || len == -1)
		return (-1);

	close(pd);

	return (1);
}

