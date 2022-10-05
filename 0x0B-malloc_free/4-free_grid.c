#include "main.h"

/**
 * free_grid - Free up the memory containing a 2D array
 * @grid: the 2D array
 * @height: The number of rows in the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	while(height--)
	{
		free(grid[height]);
	}

	free(grid);
}
