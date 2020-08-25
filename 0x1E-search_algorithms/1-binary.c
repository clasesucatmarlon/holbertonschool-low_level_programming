#include "search_algos.h"


/**
 * func_print_array - print all integer between two elements
 * @left: pointer to first element to print
 * @right: pointer to second element to print
 * Return: Void
 */

void func_print_array(int const *left, int const *right)
{
	printf("Searching in array: ");
	while (left < right)
	{
		printf("%d", *left);
		if (left < right - 1)
			printf(", ");
		else
			printf("\n");
		left++;
	}
}



/**
 * binary_search - search binary
 * @array: pointer to first element to array
 * @size: numbers of items in the array
 * @value: value to serch
 * Return: index of value in array or -i if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, middle, right;

	left = 0, middle = (size - 1) / 2, right = size;

	while (right > left)
	{
		func_print_array(array + left, array + right);
		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
		{
			right = middle;
			middle = left + (right - left - 1) / 2;
		}
		else
		{
			left = middle + 1;
			middle = left + (right - left - 1) / 2;
		}
	}
	return (-1);
}


