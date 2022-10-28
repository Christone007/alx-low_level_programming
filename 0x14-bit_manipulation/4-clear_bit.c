#include "main.h"

/**
 * clear_bit - Sets a particular bit to 0
 * @n: The number whose bit is to be cleared
 * @index: The index of the bit to clear
 *
 * Return: 1 on Success, -1 on Error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/*Checks if the byte at that index is ON, then switches it OFF*/
	if (*n & 1 << index)
		*n = *n ^ (1 << index);

	return (1);
}
