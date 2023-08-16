#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * Return: array.
 */
int **alloc_grid(int width, int height)
{	
	int **arr;
	int i, j;
	
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int*) *  height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{ 
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	
	for (i = 0; i < width; i++)
	{	
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
return (arr);
}
