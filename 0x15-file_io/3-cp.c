#include "main.h"

/**
 * close_fd - Closes a file descriptor
 * @fd: The file descriptor to close
 *
 * Return: void
 */
void close_fd(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}

}

/**
 * main - Entry point for program that copies content of a file
 * to another file
 * @argc: Argument Count
 * @argv: Argument Vector
 *
 * Return: 0 on success, or an integer error code on error
 */
int main(int argc, char **argv)
{
	char *file_from, *file_to, *buffer;
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;

	file_from = argv[1];
	file_to = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}


	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);		
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 00664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close_fd(fd_from);
		exit(99);
	}

	buffer = malloc(1024);

	do
	{
		bytes_read = read(fd_from, buffer, 1024);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			close_fd(fd_from);
			close_fd(fd_to);
			exit(98);
		}

		if (bytes_read > 0)
		{
			bytes_written = write(fd_to, buffer, 1024);
			if (bytes_written == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
				close_fd(fd_from);
				close_fd(fd_to);
				exit(99);
			}
		}
	} while (bytes_read > 0);

	close_fd(fd_from);
	close_fd(fd_to);
	free(buffer);
	return (0);
}
