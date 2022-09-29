#include "main.h"

/**
 * _strlen_recursion - Print the length of the string
 * @s: Pointer to the string
 *
 * Return: int, the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
