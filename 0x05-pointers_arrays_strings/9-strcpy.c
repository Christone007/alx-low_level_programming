#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copy a string to a buffer
 * @dest: The buffer variable
 * @src: The string to copy
 *
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;
	static char *a;

	a = dest;

	len = 0;
	while (src[len] != '\n')
	{
		len++;
	}

	i = 0;
	while (i <= len)
	{
		*(a + i) = src[i];
		i++;
	}

	return (a);
}
