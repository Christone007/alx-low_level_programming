#include "main.h"

/**
 * create_file - Create a file
 * @filename: The name of the file to create
 * @text_content: The content to be written in new file
 *
 * Return: 1 on Success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written, text_length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 00600);
	}

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close (fd);
		return (1);
	}

	text_length = 1;
	while (text_content[text_length] != '\0')
		text_length++;

	bytes_written = write(fd, text_content, text_length);
	if (bytes_written != text_length)
	{
		close (fd);
		return (-1);
	}

	close (fd);

	return (1);
}
