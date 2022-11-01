#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: The name of the file to create
 * @text_content: The content to be appended into file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t text_length, bytes_written;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}

	text_length = 0;
	while (text_content[text_length] != '\0')
		text_length++;

	text_length += 1;

	bytes_written = write(fd, text_content, text_length);

	if ((bytes_written == -1) || (bytes_written != text_length))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
