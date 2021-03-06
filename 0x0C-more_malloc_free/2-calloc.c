#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - calloc
 * @nmemb: value first
 * @size: size value
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	x = malloc(nmemb * size);
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		x[i] = 0;
	}

	return (x);

}
