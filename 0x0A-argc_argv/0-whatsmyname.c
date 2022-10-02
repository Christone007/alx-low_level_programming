#include "main.h"

/**
  * main - prints the program name
  * @argc: The number of command line arguments passed
  * @argv: A pointer to an array of pointers to the CLI arguments
  *
  * Return: Always (0) Success.
  */
int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
