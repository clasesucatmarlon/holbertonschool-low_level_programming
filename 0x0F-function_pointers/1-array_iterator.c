#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function print array
 * @array: elements
 * @size: longe
 * @action: int
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
