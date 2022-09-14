#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @c: The number whose last digit will be printed
 *
 * Return: last digit of c
 */
int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');
	return (last_digit);

}
