#include "main.h"

/**
 * append_text_to_file - Appends text at end of file
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filename is NUL - -1.
 * Otherwise - 1.
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	size_t text_len = strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd =  open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (1);
	bytes_written = write(fd, text_content, text_len);

	if (bytes_written == -1)
	{
		close(fd);
		return (1);

}
