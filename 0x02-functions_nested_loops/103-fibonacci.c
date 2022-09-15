#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a, b, c1, max;
	static long int sum, peak;

	a = 0;
	b = 1;

	sum = 0;
	peak = 0;
	max = 4000000;

	while (peak < max)
	{
		c1 = a + b;
		a = b;
		b = c1;

		if (c1 < max)
		{
		if (c1 % 2 == 0)
		{
			sum += c1;
		}
		}
		peak = c1;
	}
	printf("%ld", sum);
	putchar('\n');

	return (0);
}
