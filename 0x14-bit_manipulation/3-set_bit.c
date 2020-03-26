#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer tio number
 * @index: index to replace
 * Return: 1 if correct or -1 if not is correct
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(int) * 8)
	{
		return (-1);
	}

	*n = (*n | 1 << index);

	return (1);
}
