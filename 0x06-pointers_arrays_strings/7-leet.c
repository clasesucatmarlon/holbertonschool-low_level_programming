#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @src: input value pointer
 * Return: char
 */

char *leet(char *src)
{

	int i = 0, j;
	char old[] = "aeotlAEOTL";
	char new[] = "4307143071";

	while (src[i] != '\0')
	{
		for (j = 0; old[j] != '\0'; j++)
		{
			if (src[i] == old[j])
			{
				src[i] = new[j];
			}
		}
	i++;
	}
	return (src);
}
