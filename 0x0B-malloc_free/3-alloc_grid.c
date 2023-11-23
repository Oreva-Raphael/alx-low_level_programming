#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid- allocating a grid like matrix
 * @width: the size of array where the content will be in
 * @height: the size of the array border
 * Return: return something
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	grid = (int **)(malloc(height * sizeof(int *)));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)(malloc(width * sizeof(int)));

		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
