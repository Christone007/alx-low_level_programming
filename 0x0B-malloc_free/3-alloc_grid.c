#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - Create a 2 D array in Memory
 * @width: The number of columns
 * @height: The number of rows
 *
 * Return: Pointer to a 2D array of ints
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			/*Free all allocated memory before return*/
			while (i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		i++;
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}

	return (grid);
}
