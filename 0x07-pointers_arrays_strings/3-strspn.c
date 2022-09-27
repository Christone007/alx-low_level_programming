#include "main.h"

/**
 * _strspn - Count the number of bytes consisting of values
 * from a provided string
 * @s: The string to be searched
 * @accept: The string containing the prefix string
 *
 * Return: number of initial bytes of @s consisting only of
 * values from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	int found;

	i = 0;
	while (*s != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*s == *(accept + j))
			{
				i++;
				found = 1;
				break;
			}
			found = 0;
			j++;
		}

		if (!found)
		{
			break;
		}
		s++;
	}

	return (i);
}
