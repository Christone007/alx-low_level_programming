#include "main.h"

/**
 * _strlen - Gets the length of a string
 * @str: A pointer to the string
 *
 * Return: Number of characters in @str
 */
unsigned int _strlen(const char *str)
{
	unsigned int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}

	return (count);
}

/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b: A pointer to a string of binary digits
 *
 * Return: A decimal unsigned int, or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count, sum, power, i;

	i = 0;
	sum = 0;

	if (b == NULL)
		return (0);

	count = _strlen(b);
	power = count - 1;

	while (b[i] != '\0')
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);

		sum += (b[i] - '0') << power;
		power--;
		i++;
	}

	return (sum);
}
