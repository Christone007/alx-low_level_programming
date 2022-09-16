#include "main.h"

/**
 * print_triangle - Prints a Triangle
 * @size: The size of the triangle to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		a = 1;
		while (a <= size)
		{
			b = 0;
			while (b < size - a)
			{
				_putchar(' ');
				b++;
			}
			c = 0;
			while (c < a)
			{
				_putchar('#');
				c++;
			}
			_putchar('\n');
			a++;
		}
	}
}
