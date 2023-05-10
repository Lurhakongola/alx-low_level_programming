#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int len, count, temp = 0;

if (filename == NULL)
	return (-1);
if (text_content != NULL)
{
	for (temp = 0; text_content[temp];)
		temp++;
}
len = open(filename, O_WRONLY | O_APPEND);
count = write(len, text_content, temp);

if (len == -1 || count == -1)
{
	return (-1);
}

		close(len);
	return (1);
}
