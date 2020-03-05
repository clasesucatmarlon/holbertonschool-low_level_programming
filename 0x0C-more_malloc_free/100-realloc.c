#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: ponit 1
 * @old_size: old size
 * new_size
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *point2 = ptr, *point1 = ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	point1 = malloc(new_size);

	if (point1 == NULL)
	{
		return (NULL);
	}

	if (ptr == 0)
	{
		return (point1);
	}

	for (i = 0; i < new_size && i < old_size; i++)
	{
		point1[i] = point2[i];
	}
	free(ptr);
	return (point1);
}
