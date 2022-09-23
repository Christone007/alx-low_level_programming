#include "main.h"

/**
 * strncat - Concatenate @n characters of @src to @dest
 * @dest: The string to be appended
 * @src: The string to be copied from
 * @n: The number of bytes to concatenate
 *
 * Return: pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
