#include "main.h"

/**
 * print_sign - Print the sign of an integer
 * @n: The integer whose sign should be checked
 *
 * Description: Receives an integer and shows if its positive
 * or negative
 * Return: 1 if n is greater than 0, 0 if n is zero, -1 if n
 * less than 0
 * Error: Return 2 if error.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
return (2);
}
