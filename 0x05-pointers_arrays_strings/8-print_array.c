#include "main.h"
#include <stdio.h>

/**
* print_array - Prints the elements of an array
* @a: Pointer to the array
* @n: The number of elements in the array
*
* Return: void
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;

	if (n < 1)
	{
		printf("\n\n");
		return;
	}
	while (i < n)
	{
		if (i + 1 == n)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}

		i++;
	}

}
