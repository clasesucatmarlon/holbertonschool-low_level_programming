#include "search_algos.h"


/**
 * linear_search - search linear
 * @array: pointer to first element to array
 * @size : numbers of items in the array
 * @value: value to serch
 * Return: index of value in array or -i if not found
 */

int linear_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	int i = 0;

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
