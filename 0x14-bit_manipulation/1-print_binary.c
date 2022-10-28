#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The base 10 number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bin_digit, bit_size, print;

	print = 0;
	bit_size = sizeof(unsigned long int) * 8;

	while (bit_size--)
	{
		bin_digit = n >> bit_size;
		if (bin_digit & 1)
		{
			print = 1;
			_putchar(49);
		}
		else
		{
			if(print)
				_putchar(48);
		}
	}
	if (!print)
		_putchar(48);
}
