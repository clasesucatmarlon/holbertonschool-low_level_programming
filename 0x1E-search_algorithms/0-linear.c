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
	size_t idx;

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}