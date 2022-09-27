#include "main.h"

/**
 * _memcpy - Copies bytes from one memory area to another
 * @dest: The memory area to save the copied bytes
 * @src: The memory area to copy bytes from
 * @n: The number of bytes to copy
 *
 * Return: a char pointer to the copy created
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
