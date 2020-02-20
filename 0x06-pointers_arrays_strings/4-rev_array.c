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
	int i, j, m = 0, k;
	int aux[1024];

	for (i = 0; i < n; i++)
	{
	}

	for (j = i - 1; j >= 0; j--)
	{
		aux[j] = a[m];
		m++;
	}

	for (k = 0; k <= i; k++)
	{
		a[k] = aux[k];
	}
}

