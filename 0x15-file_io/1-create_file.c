#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file to create
 * @text_content: content to be written on the file.
 * This code defines a function called create_file
 * that takes two arguments: filename and text_content.
 * The function creates a file with the specified filename
 * and writes the text_content string to the file.
 * If the file already exists, its content is truncated
 * and overwritten with the new content
 * Return: On success, 1, otherwise, -1.
 *
 */

int create_file(const char *filename, char *text_content)
{
	int w, len, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
w = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
len = write(w, text_content, count);

if (w == -1 || len == -1)
	return (-1);
close(w);

return (1);

}
