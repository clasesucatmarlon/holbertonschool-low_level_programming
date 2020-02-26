#include "holberton.h"
/**
 * _print_rev_recursion - Print string reverse
 * @s: input value pointer
 * Return: void
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
