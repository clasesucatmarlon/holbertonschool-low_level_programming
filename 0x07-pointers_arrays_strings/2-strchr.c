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

	int i = 0, f;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			f = i;
			break;
		}
	i++;
	}

	return (s + f);
}
