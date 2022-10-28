#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The base 10 number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bin_digit, bit_size;

	bit_size = sizeof(unsigned long int) * 8;

	while (bit_size--)
	{
		bin_digit = n >> bit_size;
		if (bin_digit & 1)
			_putchar(49);
		else
			_putchar(48);
	}
}
