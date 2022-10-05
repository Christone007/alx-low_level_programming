#include "main.h"
#include <stdio.h>

/**
 * getLength - Calculate the length of a string
 * @str: The string
 *
 * Return: The int length of the string
 */
unsigned long int getLength(char *str)
{
	unsigned long int i;

	if (*str == '\0' || !str)
		return (0);

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i + 1);
}

/**
 * _strdup - Creates a copy of a string and returns a pointer to the copy
 * @str: The string to copy
 *
 * Description: The function allocates a new memory space, then copies
 * the provided string into the space and returns a pointer to the string
 *
 * Return: A pointer to the string, NULL if failed.
 */
char *_strdup(char *str)
{
	unsigned long int i, memsize;
	char *newptr;

	if (!str)
		return (NULL);

	memsize = sizeof(char) * getLength(str);
	newptr = malloc(memsize);

	if (newptr == NULL)
		return (NULL);
	i = 0;
	while (i < memsize)
	{
		newptr[i] = str[i];
		i++;
	}

	return (newptr);
}
