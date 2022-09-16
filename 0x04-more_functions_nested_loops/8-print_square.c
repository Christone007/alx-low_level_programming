#include "main.h"

/**
 * print_square - Print a square using #'s
 * @size: The length of the square to print
 *
 * Return: void
 */
void print_square(int size)
{
	int l, b;

	if (size > 0)
	{
		/*print square*/
		l = 0;
		while (l < size)
		{
			b = 0;
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
