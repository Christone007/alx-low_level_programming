#include "main.h"

/**
 * main - prints the number of arguments received
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: always (0) Success.
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
