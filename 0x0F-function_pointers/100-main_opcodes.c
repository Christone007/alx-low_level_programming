#include <stdio.h>

/**
 * main - Print the opcodes of the main function
 * @argc: Argument count
 * @argv: The Argument vector
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int nbytes, i;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	ptr = (unsigned char *)main;
	i = 0;

	while (i < nbytes)
	{
		printf("%02x ", ptr[i]);
		i++;
	}
	printf("\n");

	return (0);
}
