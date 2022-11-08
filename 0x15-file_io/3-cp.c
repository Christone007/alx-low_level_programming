#include "main.h"

/**
 * print_stderr_exit - Print a message to standard error and exit program
 * @msg: The message to print
 * @code: The exit code
 * @var: Any variable to be printed in a format specifier
 *
 * Return: void
 */
void print_stderr_exit(char *msg, int code, void *var)
{
	dprintf(STDERR_FILENO, msg, var);
	exit(code);
}

/**
 * close_fd - Closes a file descriptor
 * @fd1: The file descriptor to close
 * @fd2: The second desctiptor to close
 *
 * Return: void
 */
void close_fd(int fd1, int fd2)
{
	int cl;

	if (fd1)
	{
		cl = close(fd1);
		if (cl == -1)
		{
			print_stderr_exit("Error: Can't close fd %d", 100, fd1);
		}
	}

	if (fd2)
	{
		cl = close(fd2);
		if (cl == -1)
		{
			print_stderr_exit("Error: Can't close fd %d", 100, fd2);
		}
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
	char *file_from = argv[1], *file_to = argv[2], *buffer;
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_stderr_exit("Error: Can't read from file %s\n", 98, file_from);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 00664);
	if (fd_to == -1)
	{
		close_fd(fd_from, 0);
		print_stderr_exit("Error: Can't write to %s\n", 99, file_to);
	}
	buffer = malloc(1024);

	do {
		bytes_read = read(fd_from, buffer, 1024);
		if (bytes_read == -1)
		{
			close_fd(fd_from, fd_to);
			print_stderr_exit("Error: Can't read from file %s\n", 98, file_from);
		}
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close_fd(fd_from, fd_to);
			print_stderr_exit("Error: Can't write to %s\n", 99, file_to);
		}
	} while (bytes_read > 0);
	close_fd(fd_from, fd_to);
	free(buffer);
	return (0);
}
