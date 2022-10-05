#include "main.h"
#include <stdio.h>

/**
 * getLength - Calculate the length of a string
 * @s: The string
 *
 * Return: length of @s, NULL if empty
 */
unsigned long int getLength(char *s)
{
	unsigned long int i;

	i = 0;

	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * str_concat - Concatenate two strings in a new memory location
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: Pointer to the concatenated string, NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int l1, l2, i, j;
	char *ptr;

	i = 0;
	j = 0;
	l1 = getLength(s1);
	l2 = getLength(s2);

	ptr = malloc(sizeof(char) * (l1 + l2 + 1));

	if (ptr == NULL)
		return (NULL);

	while (i < l1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j <= l2)
	{
		if (j == l2)
			ptr[i + j] = '\0';
		ptr[i + j] = s2[j];
		j++;
	}
	return (ptr);
}
