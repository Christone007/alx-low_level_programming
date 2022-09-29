#include "main.h"

/**
* _print_rev_recursion - Print a string in reverse
* @s: The string to print
*
* Return: void
*/
void _print_rev_recursion(char *s)
{
	char first;

	if (*s != '\0')
	{
		first = *s;
		s++;

		_print_rev_recursion(s);
		_putchar(first);
	}
}

