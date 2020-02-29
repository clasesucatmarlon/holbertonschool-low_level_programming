#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: value pointer char
 * @c: value char variable
 * Return: char
 */

char *_strchr(char *s, char c)
{

	int i = 0, j, e = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

	}

	for  (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			e = 1;
			break;
		}
	}


	if (e == 1)
	{
		return (&s[j]);
	}
	else
	{
		return ('\0');
	}
}
