#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free array
 * @grid: array input pointer to pointer
 * @height: input value
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
