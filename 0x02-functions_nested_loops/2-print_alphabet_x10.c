#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
	print_alphabet();
	n++;
	}
}

/**
 * print_alphabet - Print a -z
 *
 * Description: Print the alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
