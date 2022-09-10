#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print Single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
