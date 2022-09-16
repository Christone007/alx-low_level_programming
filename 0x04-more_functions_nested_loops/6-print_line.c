#include "main.h"

/**
* print_line - Print a line on the terminal
* @n: The number of underscores to use to
* create the line
*
* Return: void
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}

