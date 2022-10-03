#include "main.h"

/**
 * _isupper - Check if a character is uppercase
 * @c: an integer to be checked
 *
 * Return: 1 (if c is Uppercase) or 0 (if c is
 * lowercase)
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
