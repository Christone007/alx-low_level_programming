#include "main.h"

/**
 * print_alphabet - Print a -z
 *
 * Description: Print the alphabet in lowercase
 * Return: void
 */
void print_alphabet(void){
	char n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}

	_putchar('\n');
	return;
}
