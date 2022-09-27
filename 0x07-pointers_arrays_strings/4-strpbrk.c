#include "main.h"

/**
 * _strpbrk - Locate the first occurrence of any of the bytes
 * in a search string.
 * @s: The string to be searched
 * @accept: The string containing bytes to search for
 *
 * Return: Pointer to first occurence of any member of @accept in @s
 * or return NULL if no member is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int j;
	int match;

	match = 0;

	while (*s != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*s == *(accept + j))
			{
				match = 1;
				break;
			}
			j++;
		}
		if (match)
			return (s);
		s++;
	}
	return (NULL);
}
