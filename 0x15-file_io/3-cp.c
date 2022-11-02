#include "main.h"

/**
 * free_and_close - frees the buffer and closes the FDs
 * @buf: The buffer
 * @fd1: The first file descriptor
 * @fd2: The second file descriptor
 */
void free_and_close(char *buf, int fd1, int fd2)
{
	int cl_code;

	if (buf != NULL)
		free(buf);

	if (fd1 != -1)
	{
		cl_code = close(fd1);
		if (cl_code == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
			exit (100);
		}

	}

	if (fd2 != -1)
	{
		cl_code = close(fd2);
		if (cl_code == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
			exit(100);
		}
	}
}


/**
 * main - Creates a copy of a file
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: an integer, 1 on success and others on error
 */
int main(int argc, char **argv)
{
	ssize_t check, buff_size;
	char *file_from, *file_to, *buffer;
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 00664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	buffer = malloc(1024);
	if (buffer == NULL)
		exit (100);

	check = read(fd_from, buffer, 1024);
	if (check == -1)
	{
		free_and_close(buffer, -1, -1);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	for (buff_size = 0; buffer[buff_size] != '\0'; buff_size++);

	check = write(fd_to, buffer, buff_size + 1);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", file_to);
		exit(99);
	}

	free_and_close(buffer, fd_from, fd_to);

	return (1);
}
