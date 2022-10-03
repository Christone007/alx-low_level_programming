#include "main.h"

/**
 * _strncpy - Copies a string of length @n from @src to @dest
 * @dest: The string to be appended
 * @src: The string to be copied from
 * @n: The number of bytes to copy
 *
 * Return: A pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
