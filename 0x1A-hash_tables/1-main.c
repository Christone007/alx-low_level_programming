#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	char *s;

	s = "Holberton School !";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	return (EXIT_SUCCESS);
}
