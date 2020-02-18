#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to by src, including the
 * terminating null byte to the buffer pointed to by dest.
 * @dest: value input pointer
 * @src: value input pointer
 * Return: char pointer
 */

char *_strcpy(char *dest, char *src)
{
	int lg = 0, i;

	while (src[lg] != '\0')
		lg++;

	for (i = 0; i < lg; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
