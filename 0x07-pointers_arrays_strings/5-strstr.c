#include "main.h"

/**
 * _strstr - Finds the first occurence of a certain
 * string in another string
 * @haystack: Pointer to the base string
 * @needle: The string to be searched for
 *
 * Return: Pointer to first occurence of @needle in @haystack
 * or NULL if not found or error
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	if (!needle)
		return (NULL);

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			i = 0;
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
		}
		haystack++;
	}
	return (NULL);
}
