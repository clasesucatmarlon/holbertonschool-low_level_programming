#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: input value pointer
 * Return: void
 */

void puts_half(char *str)
{

	int i = 0, mid = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		mid = i / 2;
	}
	else
	{
		mid = (i + 1) / 2;
	}

	for (j = mid - 1; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
