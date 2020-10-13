#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid - free 2d mem
 *@grid: mem to free
 *@height: h of the grid
 *return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
