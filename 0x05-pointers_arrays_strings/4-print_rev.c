#include "holberton.h"
/**
 * print_rev - Print reverse
 * @s: value input
 * Return: void
 */

void print_rev(char *s)
{

	int i = 0, j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i; j != -1; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
