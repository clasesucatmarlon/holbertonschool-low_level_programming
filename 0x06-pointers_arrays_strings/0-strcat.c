#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: string destination
 * @src: string source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{

	int lg1 = 0, lg2 = 0, i;

	while (dest[lg1] != '\0')
	{
		lg1++;
	}

	while (src[lg2] != '\0')
	{
		lg2++;
	}

	for (i = lg1; i <= lg1 + lg2; i++)
	{
		dest[i] = src[i - lg1];
	}

	return (dest);
}
