#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print letters in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
