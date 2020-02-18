#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: input value pointer
 * Return: void
 */

void puts_half(char *str)
{

	int i = 0, mid = 0, j, s;

	while (str[i] != '\0')
	{
		i++;
	}
	_putchar((char)(i + 48));
	_putchar('\n');
	if (i % 2 == 0)
	{
		mid = i / 2;
		s = 0;
	}
	else
	{
		mid = (i - 1) / 2;
		s = 1;
	}

	for (j = mid + s; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
