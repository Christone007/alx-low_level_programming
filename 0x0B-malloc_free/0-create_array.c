#include "main.h"

/**
 * create_array - create an array of chars and initialize it with
 * a specific char
 * @size: The size of the array to create
 * @c: The char to initialize array with
 *
 * Return: Pointer to the array if Success
 * NULL, if fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size < 1)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	while (size--)
	{
		ptr[size] = c;
	}

	return (ptr);
}
