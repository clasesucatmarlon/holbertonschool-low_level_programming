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

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
