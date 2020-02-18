#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 * @s: value input
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

