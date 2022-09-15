#include "main.h"

/**
 * print_in_format - Print a digit
 * @n: The digit to be printed in format
 *
 * Description: Print as 3 digit number replacing
 * any trailing 0's with .'s
 * Return: void
 */
void print_in_format(int n)
{
	if (n < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}

	else if (n >= 10 && n < 100)
	{
		int a, b;

		a = n / 10;
		b = n % 10;

		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(a + '0');
		_putchar(b + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		int a, b, c;

		a = n / 100;
		b = ((n / 10) % 10);
		c = n % 10;

		_putchar(',');
		_putchar(' ');
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(c + '0');
	}
}


/**
 * print_times_table - Print a times table
 * @n: The times table size to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a, b;

	if (n > 15 || n < 0)
		return;

	a = 0;
	while (a <= n)
	{
		b = 0;
		while (b <= n)
		{
			int prod;

			prod = a * b;

			if (b == 0)
				_putchar('0');
			else
			print_in_format(prod);

			b++;
		}
		if (b != n)
			_putchar('\n');

		a++;
	}
	/*if (n < 10)*/
		/* _putchar('\n');*/
}
