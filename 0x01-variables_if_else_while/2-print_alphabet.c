#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print letters of alphabet using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}



