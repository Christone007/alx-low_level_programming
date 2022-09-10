#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print combinations of 2-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d, num1, num2;

	a = '0';

	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				while (d <= '9')
				{
					num1 = (a * 10) + b;
					num2 = (c * 10) + d;

					if (num1 < num2)
					{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);

					if (!(a == '9' && b == '8'))
					{
					putchar(',');
					putchar(' ');
					}
					}

					d++;
				}
				c++;

			}

			b++;

		}
		a++;

	}
	putchar('\n');

	return (0);
}
