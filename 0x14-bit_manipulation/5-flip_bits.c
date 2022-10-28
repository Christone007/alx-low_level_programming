#include "main.h"

/**
 * flip_bits - Count the number of bits to flip to equalize two numbers
 * @n: First number
 * @m: Second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, count;

	diff = n ^ m;

	count = 0;
	while (diff)
	{
		if (diff & 1)
			count++;

		diff >>= 1;
	}

	return (count);
}
