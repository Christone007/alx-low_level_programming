#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the Hexadecimal characters
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hexa, hexa2;

	hexa = '0';
	hexa2 = 'a';

	while (hexa <= '9')
	{
		putchar(hexa);
		hexa++;
	}
	while (hexa2 <= 'f')
	{
		putchar(hexa2);
		hexa2++;
	}
	putchar('\n');

	return (0);
}
