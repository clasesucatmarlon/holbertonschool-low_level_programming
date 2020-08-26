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
	unsigned long int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
