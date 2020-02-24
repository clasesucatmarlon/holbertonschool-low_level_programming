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

	int i = 0, f, e = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			f = i;
			e = 1;
			break;
		}
		i++;
	}

	if (e == 1)
	{
		return (&s[f]);
	}
	else
	{
		return ('\0');
	}
}
