#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: input value pointer
 * @n: input value
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, k;
	int aux[1024];

	k = n - 1;

	for (i = 0; i < n; i++)
	{
		aux[i] = a[k];
		k--;
	}

	for (j = 0; j < n; j++)
	{
		a[j] = aux[j];
	}
}

