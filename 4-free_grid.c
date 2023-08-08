#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2D array grid.
 * @grid: 2D grid array.
 * @height: height dimension of grid.
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int j;
	
	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
