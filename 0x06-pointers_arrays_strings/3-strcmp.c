#include "main.h"

/**
 * getStringLength - get the length of a string
 * @s: The string whose length should be found
 *
 * Return: the length of the string as int
 */
int getStringLength(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcmp - Compares two stings
 * @s1: The string to be compared against another
 * @s2: The string to be compared against
 *
 * Return: 1 if @s1 > @s2, 0 if @s1 == @s2, -1 if @s1 < @s2
 */
int _strcmp(char *s1, char *s2)
{
	int l1, l2;

	l1 = getStringLength(s1);
	l2 = getStringLength(s2);

	if (l1 > l2)
		return (15);
	else if (l1 == l2)
		return (0);
	else
		return (-15);
}

