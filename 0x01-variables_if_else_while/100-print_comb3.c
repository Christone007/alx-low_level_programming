#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all 2-digit combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	a = '0';

	while (a <= '9')
	{
		b = '1';
		while (b <= '9')
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);

				if (!(a == '8' && b == '9'))
				{
				putchar(',');
				putchar(' ');
				}
			}
			b++;

		}
		a++;

	}
	putchar('\n');

	return (0);
}
