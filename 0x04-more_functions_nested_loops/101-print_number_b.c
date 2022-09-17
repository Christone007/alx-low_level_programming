#include "main.h"

/**
 * modulo - Removes the - from a negative number;
 * @n: The integer to be modularized
 *
 * Return: The positive value of n
 */
int modulo(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
	{
		return (n);
	}
}

/**
 * get_first_divider - return the highest multiple of
 * 10 that can divide a given number
 * @n: The integer whose divisor would be found
 *
 * Return: the highest multiple of 10 that can divide the number
 */
int get_first_divider(int n)
{
	static int divider;

	if (n >= 10)
	{
		divider = 10;
		while (divider <= n)
		{
			divider *= 10;
		}

		divider /= 10;
		return (divider);
	}
	else
	{
		return (1);
	}
}

/**
 * print_number - Print an integer
 * @n: The integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	static int divider, num;
	int digit;

	if (n < 0)
	{
		_putchar('-');
	}

	num = modulo(n);
	divider = get_first_divider(num);

	while (divider >= 1)
	{
		digit = num / divider;
		num = num % divider;
		_putchar(digit + '0');
		divider /= 10;
	}
}
