#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse a String
 * @s: The pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int size, i, temp;

	size = 0;
	while (*(s + size) != '\0')
	{
		size++;
	}

	i = 0;
	while (i < size / 2)
	{
		temp = s[i];
		s[i] = s[size - i - 1];
		s[size - i - 1] = temp;
		i++;
	}
}
