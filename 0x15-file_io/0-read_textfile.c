#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 * read_textfile -  function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: Name of text file.
 * @letters: Number of letters it should read and print.
 * Return: number of letters that were read, else 0
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des, content_read, content_write;
	char *buff_str;

	if (filename == NULL)
		return (0);

	if (file_des == -1)
		return (0);
	buff_str = mallocc(sizeof(char) * letter);

	if (buff_str == NULL)
		return (0);

	content_read = read(file_des, buff_str, letters);

	if (content_read == -1)
	{
		free(buff_str);
		return (0);

		free(buff_str);
		close(file_des);
		return (0);
	}
