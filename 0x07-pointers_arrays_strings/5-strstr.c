#include "main.h"

/**
 * _strstr - Locate a substring in a string
 * @haystack: The string
 * @needle: The substring
 *
 * Return: if substring is found, Pointer to the beginning
 * of found substring. Else, return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int j;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			j = 0;
			while (*(haystack + j) == *(needle + j))
			{
				if (*(needle + (j + 1)) == '\0')
				{
					return (haystack);
				}
				j++;
			}
		}
		haystack++;
	}

	return (NULL);
}
