#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Free a 2-dimen grid of integers and its subarrays
 * @grid: Pointer to the 2-dimensional grid
 * @height: The height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}

	free(grid);
}
