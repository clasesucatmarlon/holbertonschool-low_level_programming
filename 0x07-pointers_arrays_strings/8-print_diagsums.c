#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: input value pointer
 * @size: value variable int
 * Return: void
 */

void print_diagsums(int *a, int size)
{

	int f, f2, total, dp = 0, ds = 0;

	total = size * size;

	for (f = 0; f < total; f = f + size + 1)
	{
		dp = dp + a[f];
	}

	for (f2 = size - 1; f2 < total - 1; f2 = f2 + size - 1)
	{
		ds = ds + a[f2];
	}

	printf("%d, %d\n",  dp, ds);
}
