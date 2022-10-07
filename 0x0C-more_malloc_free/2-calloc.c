#include "main.h"

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Description: Initialize the memory bytes to 0.
 *
 * Return: a Void pointer to the allocated memory, if error return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, nb;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	nb = nmemb * size;

	ptr = malloc(nb);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (nb--)
	{
		*(ptr + i) = '\0';
		i++;
	}

	return (ptr);
}
