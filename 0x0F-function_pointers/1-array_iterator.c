#include "function_pointers.h"

/**
 * array_iterator - Calls a given function for each element of an array
 * @array: The array
 * @size: The number of elements in @array
 * @action: The pointe to the function to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (size < 1 || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
