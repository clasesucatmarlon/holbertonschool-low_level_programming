#include  "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: value min of array
 * @max: value max of array
 * Return: int
 */

int *array_range(int min, int max)
{

	int large = 0, i, c = 0;
	int *str;

	if (min > max)
	{
		return (NULL);
	}

	large = max - min + 1;

	str = malloc(large * sizeof(int));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		str[c] = i;
		c++;
	}

	return (str);


}
