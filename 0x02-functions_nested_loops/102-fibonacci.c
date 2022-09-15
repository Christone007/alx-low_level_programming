#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, a, b, c1;

	a = 1;
	b = 2;
	i = 0;

	printf("%ld, %ld , ", a, b);

	while (i < 48)
	{
		c1 = a + b;
		a = b;
		b = c1;

		if (i != 47)
			printf("%ld, ", b);
		else
			printf("%ld", b);

		i++;
	}
	putchar('\n');

	return (0);
}
