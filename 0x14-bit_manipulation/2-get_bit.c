#include "holberton.h"
/**
 * get_bit - return value of index
 * @n: numbers to check
 * @index: valu for look for the numer
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{

	unsigned int i;

	if (index > sizeof(n) * 8)
		return (-1);

	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
	return (n & 1);
}
