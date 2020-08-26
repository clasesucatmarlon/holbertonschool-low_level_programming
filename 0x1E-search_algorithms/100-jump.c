#include "search_algos.h"
#include <math.h>

/**
 * jump - linear search an array for a value
 * @array: input array
 * @start: starting index
 * @end: ending index
 * @size: size of array
 * @value: value to search for
 * Return: index of array where value is found, -1 if not found
 */

int jump(int *array, int start, int end, int size, int value)
{
	printf("Value found between indexes [%i] and [%i]\n", start, end);
	if (end >= size)
		end = size - 1;
	for (; start <= end; start++)
	{
		printf("Value checked array[%i] = [%i]\n", start, array[start]);
		if (array[start] == value)
			return (start);
	}
	return (-1);
}

/**
 * jump_search - searches for a value in an array of integers
 * @array: input array
 * @size: size of array
 * @value: value to search for
 * Return: index of array where value is found, -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int i, start, end;
	int step = sqrt(size);

	if (!array)
		return (-1);
	for (i = 0; i < size; i += step)
	{
		if (array[i] >= value)
		{
			start = i - step;
			end = i;
			return (jump(array, start, end, size, value));
		}
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (jump(array, i - step, i, size, value));
}
