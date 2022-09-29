#include "main.h"
#include <stdio.h>

/**
 * getLength - calculate the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
unsigned int getLength(char *s)
{
	int i;

	i = 0;
	if(*(s + i) != '\0')
	{
		return (1 + getLength(s++));	
	}
	return (0);
}

/**
 * _print_rev_recursion - Print a string in reverse
 * @s: The pointer to the string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if(*s == '\0')
	{
		_putchar(*(s - 1));
		_print_rev_recursion(s - 1);
	}
	if(*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
}
