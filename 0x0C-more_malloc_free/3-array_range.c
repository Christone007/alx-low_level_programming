#include "main.h"

/**
 * array_range - create an ordered array of integers from a given range
 * @min: The starting value
 * @max: The ending value
 *
 * Return: a pointer to an array of ints, NULL if error
 */
int *array_range(int min, int max)
{
	int *ptr, ne, nb, i;

	if (min > max)
		return (NULL);
	ne = max - min + 1;
	nb = ne * sizeof(int);

	ptr = malloc(nb);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		ptr[i] = min++;
		i++;
	}

	return (ptr);
}
