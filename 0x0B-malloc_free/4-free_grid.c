#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees memory allocated by alloc_grid
* @grid: pointer to allocated matrix array
* @height: height of matrix array
* Return: void
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
		free(grid[i]);
	}

	free(grid);

}
