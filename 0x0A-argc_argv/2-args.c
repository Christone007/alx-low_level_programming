#include "main.h"

/**
 * main - print the arguments received
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always (0) Success
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argc--)
	{
		printf("%s\n", argv[i++]);
	}

	return (0);
}
