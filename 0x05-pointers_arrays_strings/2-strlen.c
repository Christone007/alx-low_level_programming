#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: A pointer to the string
 *
 * Return: The numerical length of the string
 */
int _strlen(char *s)
{
	int i;
	int stlen;

	stlen = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		stlen++;
		i++;
	}

	return (stlen);
}
