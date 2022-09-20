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

/**
 * print_rev - Prints a String in reverse
 * @s: The string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int stringlength, lastindex;

	stringlength = _strlen(s);
	lastindex = stringlength - 1;
	while (lastindex >= 0)
	{
		_putchar(*(s + lastindex));
		lastindex--;
	}
	_putchar('\n');
}
