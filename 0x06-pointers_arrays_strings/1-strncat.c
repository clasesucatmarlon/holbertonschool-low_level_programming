#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: string destination
 * @src: string source
 * @n: integer var
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int lg1 = 0, lg2 = 0;

	while (dest[lg1] != '\0')
	{
		lg1++;
	}

	while (src[lg2] != '\0' && lg2 < n)
	{
		dest[lg1 + lg2] = src[lg2];
		lg2++;
	}

	return (dest);
}
