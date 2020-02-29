#include "holberton.h"
/**
  * print_number - prints an integer
  *@n: input value
  * Return: 0
  */

void print_number(int n)
{

	unsigned int value = n;

	if (n < 0)
	{
		_putchar(45);
		value = value * (-1);
	}
	if (value / 10)
	{
		print_number(value / 10);
	}
	_putchar((value % 10) + 48);
}
