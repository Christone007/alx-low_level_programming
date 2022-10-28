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
	int i;


	diff = n ^ m;

	count = 0;
	i = 0;
	while (diff >> i)
	{
		if (diff >> i & 1)
			count++;

		i++;
	}

	return (count);
}
