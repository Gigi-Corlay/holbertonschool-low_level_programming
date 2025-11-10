#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Description: Each element of the grid is initialized to 0.
 * Memory for the grid and its rows is allocated dynamically.
 * Returns NULL if width or height is 0 or negative, or if memory allocation fails.
 *
 * Return: pointer to the 2D grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(*grid) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
		free(grid);
		return (NULL);
		}

		for (j = 0; j < width; j++)
		grid[i][j] = 0;
	}

	return (grid);
}
