#include "main.h"

/**
 * set_bit - Sets the bit at a given index to 1
 * @n: The number
 * @index: The index of the bit to be set
 *
 * Return: 1 if success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | 1 << index;

	return (1);
}
