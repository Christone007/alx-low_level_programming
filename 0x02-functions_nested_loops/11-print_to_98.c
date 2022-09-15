#include <stdio.h>


/**
 * countdown_to_98 - count down to 98.
 * @b: The starting number
 *
 * Description: Prints numbers from b down
 * to 98.
 * Return: void
 */
void countdown_to_98(int b)
{
	while (b >= 98)
	{
		printf("%d", b);

		if (b != 98)
			printf(", ");
		b--;
	}
	putchar('\n');
}


/**
 * countup_to_98 - count up to 98.
 * @a: The starting number
 *
 * Description: Prints numbers from a up to 98.
 * Return: void
 */
void countup_to_98(int a)
{
	while (a <= 98)
	{
		printf("%d", a);

		if (a != 98)
			printf(", ");
		a++;
	}
	putchar('\n');
}



/**
 * print_to_98 - Prints numbers to 98.
 * @n: The number to start counting from.
 *
 * Description: Depending on the value of n, function
 * would either count up or down to 98.
 * Return: void
 */
void print_to_98(int n)
{
	if (n >= 98)
		countdown_to_98(n);
	if (n < 98)
		countup_to_98(n);
}
