#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @src: input value pointer
 * Return: char
 */

char *rot13(char *src)
{

	int i, j;

	char ent[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char sal[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; src[i] != '\0'; i++)
	{
		for (j = 0; ent[j] != '\0'; j++)
		{
			if (src[i] == ent[j])
			{
				src[i] = sal[j];
				break;
			}
		}
	}
	return (src);
}
