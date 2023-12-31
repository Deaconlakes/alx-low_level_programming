#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2 dimensional grid
 * @grid: array of int multidimensional
 * @height: height of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
