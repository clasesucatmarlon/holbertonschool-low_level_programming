#include "holberton.h"
/**
 * print_sign - function prints the sign of a number"
 * Return: 1 and prints + if n is > 0. 0 and prints 0 if n is zero.
 * -1 and prints - if n is less than zero
 * @n: value init
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
