#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allor and init a 2-dimensional grid of integers
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: If malloc fails or w or h is 0 or negative, returns NULL;
 * else, returns a pointer to the allocated grid.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);

			return (NULL);

		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
