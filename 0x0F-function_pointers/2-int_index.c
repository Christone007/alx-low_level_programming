#include "function_pointers.h"

/**
 * int_index - returns the index of a match
 * @array: The array
 * @size: Array size
 * @cmp: The callback
 *
 * Return: int index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, temp;

	i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		temp = cmp(array[i]);
		if (temp != 0)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
