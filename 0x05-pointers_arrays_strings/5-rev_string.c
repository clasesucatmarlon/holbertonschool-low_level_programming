#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: input value pointer
 * Return: void
 */

void rev_string(char *s)
{

	int i, j, m, b;
	char aux[10];

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	/*_putchar((char)(i + 48));*/

	m = 0;
	i--;
	for (j = i;  s[j] > -1; j--)
	{
		aux[m] = s[j];
		m++;
	}

	for (b = 0; b <= i; b++)
	{
		s[b] = aux[b];
	}
}
