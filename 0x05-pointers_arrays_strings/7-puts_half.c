#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: input value pointer
 * Return: void
 */

void puts_half(char *str)
{

	int lg = 0,  mid = 0, j;
	
	while (str[lg] != '\0')
	{
		lg++;
	}

	if (lg % 2 == 0)
	{
		mid = lg / 2;
	}
	else
	{
		mid = ((lg - 1) / 2) + 1;
	}
	for (j = mid; j < lg; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
