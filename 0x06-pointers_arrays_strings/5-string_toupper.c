#include "holberton.h"
/**
 * string_toupper - changes lowercase of string to uppercase
 * Return: Char
 * @src: input value pointer
 */

char *string_toupper(char *src)
{

	int i = 0;

	while (src[i] != '\n')
	{
		if (src[i] >= 97 && src[i] <= 122)
		{
			src[i] = src[i] - 32;
		}
		i++;
	}
	return (src);
}
