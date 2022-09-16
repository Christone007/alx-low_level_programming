#include <stdio.h>

/**
 * main - Prints the FizzBuzz
 *
 * Description: Prints numbers 1-100
 * but prints Fizz for multiples of 3,
 * prints Buzz for multiples of 5 and
 * prints FizzBuzz for multiples of both
 * 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}

		if (n != 100)
		{
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
