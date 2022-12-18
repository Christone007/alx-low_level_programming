#include "main.h"

/**
 * _strcmp - Compares two stings
 * @s1: The string to be compared against another
 * @s2: The string to be compared against
 *
 * Return: 1 if @s1 > @s2, 0 if @s1 == @s2, -1 if @s1 < @s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}

