#include "holberton.h"
# include <stdlib.h>
/**
 * string_nconcat - join two string
 * @s1: string one
 * @s2: string two
 * @n: unsigned large
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int t = 0, i = 0, j = 0, k, l, m, h;
	char *x;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{

		if (j < n)
			t++;
		j++;
	}
	m = i + t;
	x = malloc(m * sizeof(char) + 1);

	if (x == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		x[k] = s1[k];
	}
	h = 0;
	for (l = k; l < (m); l++)
	{
		x[l] = s2[h];
		h++;
	}
	x[l] = '\0';
	return (x);
}
