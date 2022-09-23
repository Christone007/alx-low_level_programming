#include "main.h"

/**
 * reverse_array - Reverse the content of an arary of integers
 * @a: The array to reverse
 * @n: The number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;

		i++;
	}
}
