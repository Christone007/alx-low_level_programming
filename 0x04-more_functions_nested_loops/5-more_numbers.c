#include "main.h"

/**
 * more_numbers - Print 0-14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;
	int a, b;

	i = 0;
	while (i < 10)
	{
		j = 1;
		while (j < 15)
		{
			if (j > 9)
			{
				a = j / 10;
				b = j % 10;
			}
			else
			{
				a = 0;
				b = j;
			}
			if (a != 0)
			{
				_putchar(a + '0');
			}
			_putchar(b + '0');
			j++;
		}
	       _putchar('\n');
	       i++;
	}
}
