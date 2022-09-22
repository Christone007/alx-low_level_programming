#include "main.h"

/**
 * puts_half - Print the second half of a string
 * @str: The string whose half is printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, to_print;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 1)
	{
		to_print = (len / 2) + 1;
	}
	else
	{
		to_print = len / 2;
	}

	while (to_print < len)
	{
		_putchar(str[to_print]);
		to_print++;
	}
	_putchar('\n');
}
