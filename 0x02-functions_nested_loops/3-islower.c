#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked. 
 *
 * Description: Takes a character and checks if its lowercase.
 * Return: 1 if lowercase, 0 if false
 */
int _islower(int c)
{
char n = c;

if (n >= 97 && n <= 122)
{
	return (1);
}
else 
{
	return (0);
}

}

