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
	int i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return (dest);
}
