#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - eturns a ptr to a 2 dimen array of int
 * @width: input value int
 * @height: input value int
 * Return: int
 */

int **alloc_grid(int width, int height)
{

	int **w;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	w = malloc(height * sizeof(int *));

	if (!w)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		w[i] = malloc(width * sizeof(int *));
		if (w[i] == NULL)
			return (NULL);

		for (j = 0; j < height; j++)
		{
			w[i][j]	= 0;
		}
	}
	return (w);
}




