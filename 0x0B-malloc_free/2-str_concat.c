#include "holberton.h"
# include <stdlib.h>
/**
 * str_concat - join two string
 * @s1: string one
 * @s2: string two
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{

	int i = 0, j = 0, k, l, m, h;
	char *x;

	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == '\0')
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	m = i + j;
	x = malloc(m * sizeof(char) + 1);

	for (k = 0; k < i; k++)
	{
		x[k] = s1[k];
	}
	h = 0;
	for (l = k; l < (i + j); l++)
	{
		x[l] = s2[h];
		h++;
	}
	x[l] = '\0';
	return (x);
}

