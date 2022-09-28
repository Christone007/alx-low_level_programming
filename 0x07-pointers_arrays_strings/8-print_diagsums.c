#include "main.h"

/**
 * print_diagsums - Print sum of diagonals of square matrix
 * @a: A pointer to an array
 * @size: Size of the square array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *((a + i * size) + j);
			}
			if (i + j == size - 1)
			{
				sum2 += *((a + i * size) + j);
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
