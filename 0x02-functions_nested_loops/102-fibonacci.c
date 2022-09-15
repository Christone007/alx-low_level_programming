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

	printf("%ld, %ld\n", a, b);

	while (i < 48)
	{
		c1 = a + b;
		a = b;
		b = c1;

		printf("%ld, ", b);

		i++;
	}
}
