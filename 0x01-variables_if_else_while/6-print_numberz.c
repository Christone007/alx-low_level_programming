#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print 1-10 without using char
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
