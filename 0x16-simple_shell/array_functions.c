#include "main.h"

/**
 * array_size - Calculates the size of a NULL terminated array
 * @arr: The array
 *
 * Return: The size of the array including the NULL terminator
 */
int array_size(char **arr)
{
	int i = 0;

	while (arr[i] != NULL)
	{
		i++;
	}

	i++;

	return (i);
}

