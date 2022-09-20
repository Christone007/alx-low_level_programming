#include "main.h"

/**
 * _puts - Print every other character of a
 * string followed by a new line
 * @str: The string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + (i + 1)) != '\0')
		{
			_putchar(*(str + i));
			i += 2;
		}
		else
		{
			i++;
		}
	}
	_putchar('\n');
}
