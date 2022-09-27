#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @c: The character to locate
 * @s: The string to locate @c in
 *
 * Return: A pointer to the location of first occurence
 * of @c in @s, or NULL if @c is not found in @s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
