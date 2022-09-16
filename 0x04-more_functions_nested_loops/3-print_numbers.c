#include "main.h"

/**
 * print_numbers - Prints numbers 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
