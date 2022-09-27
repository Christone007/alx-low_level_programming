#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: A pointer to the memory area
 * @b: The constant byte
 * @n: The size of the memory area to fill
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i <= n)
	{
		*s = b;
		i++;
		s++;
	}
	return (s);
}
