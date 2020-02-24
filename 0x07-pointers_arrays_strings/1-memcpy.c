#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest: char value pointer
 * @src: char value pointer
 * @n: unsigned value var
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}
	return (dest);

}
