#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: input value pointer
 * @s2: input value pointer
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{

	int i = 0, n = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			n = 0;
		}
		else
		{
			n =  s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (n);
}
