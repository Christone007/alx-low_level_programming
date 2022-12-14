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
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if (n >> index & 1)
		return (1);
	return (0);
}
