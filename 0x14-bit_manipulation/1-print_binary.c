#include "holberton.h"
/**
 * print_binary - print number to binary
 * @n: numbers base 10
 * Return: void
 */

void print_binary(unsigned long int n)
{


	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}

	print_binary(n >> 1);

	/*_putchar((n - ((n >> 1) * 2)) + '0');*/
	_putchar((n & 1) + '0');

}
