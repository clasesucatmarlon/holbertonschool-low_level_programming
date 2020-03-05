#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocated memory used malloc
 * @b: input value unsigned int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{

	unsigned int *x;

	x = (unsigned int*)malloc(b * sizeof(unsigned int));
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
