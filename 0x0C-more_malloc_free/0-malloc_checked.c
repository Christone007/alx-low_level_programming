#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates a memory block
 * @b: The number of bytes to reserve
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
