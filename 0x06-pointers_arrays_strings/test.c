#include <stdio.h>

/**
 * _capitalize - capitalize a character
 * @c: The character to be capitalized
 *
 * Desciption: Checks if a character is lowercase,
 * then caitalizes it
 *
 * Return: The capitalized character
 */
char _capitalize(char c)
{
	int temp;

	if (c >= 'a' && c <= 'z')
	{
		temp = c - '0';
		temp -= 32;
		c = temp + '0';
	}
		return (c);
}


/**
 *
 *
 *
 */
int main(void)
{
	int i;
	char arr[] = " ,;.!?\"(){}";


	
	return (0);
}
