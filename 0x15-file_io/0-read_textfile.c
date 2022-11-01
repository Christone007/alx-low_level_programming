#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: The name of the file to read from
 * @letters: The number of letters to read from the file
 *
 * Return: Actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	buffer = malloc((sizeof(char) * letters) + 1);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	
	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
		return (0);

	buffer[bytes_read + 1] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);
	
	return (bytes_written);
}
