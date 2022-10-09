#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	if (*needle == '\0' || !needle)
		return (NULL);

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
