#include "main.h"
/**
 * _strlen - Get the length of a string
 * @s: pointer to the string
 *
 * Return: The length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	i = 0;

	if (s == NULL)
		return (0);

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - Concatenates first n bytes of a string to another
 * @s1: The base string
 * @s2: The string to be added
 * @n: The number of bytes of s2 to concatenate
 *
 * Return: A pointer to concatenated string, NULL if error
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, tlen, i, j;
	char *ptr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}


	tlen = len1 + n;

	ptr = malloc(sizeof(char) * (tlen + 1));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (i < len1)
	{
		ptr[i] = s1[j];
		i++;
		j++;
	}

	j = 0;
	while (j < n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}

	ptr[i] = '\0';

	return (ptr);
}
