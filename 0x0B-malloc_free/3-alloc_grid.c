#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - funct to return pointer to 2 direction array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to an array of int
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (a--; a >= 0; a--)
			free(grid[a]);
			free(grid);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	return (grid);
}
