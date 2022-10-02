#include "main.h"

/**
 * main - returns the product of its two int arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always (0) Success
 */
int main(int argc, char **argv)
{
	int n1, n2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	res = n1 * n2;

	printf("%d\n", res);

	return (0);
}
