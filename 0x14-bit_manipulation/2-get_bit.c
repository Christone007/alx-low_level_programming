#include "main.h"

/**
 * get_bit - Gets the bit at particular index
 * @n: The decimal number
 * @index: The index of the bit to return
 *
 * Return: The bit at the specified index or -1 of error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ncopy;
	unsigned int i;

	i = 0;
	ncopy = n;

	while (ncopy >> i)
		i++;

	if (index >= i )
		return (-1);

	if (n >> index & 1)
		return (1);
	return (0);
}
