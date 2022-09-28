#include "main.h"

/**
 * _puts_recursion - Print a string, followed by a newline
 * @s: The pointer to the string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
