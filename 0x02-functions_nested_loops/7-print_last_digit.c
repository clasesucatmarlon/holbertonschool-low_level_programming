#include "holberton.h"
/**
 * print_last_digit - function prints the last digit of a numbe
 * Return: number
 * @n: value init
 */
int print_last_digit(int n)
{
int num;
num = (n % 10);
if (num < 0)
{
num = num * (-1);
}
_putchar(num + 48);
return (num);
}
