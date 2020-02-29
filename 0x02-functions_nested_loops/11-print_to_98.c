#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural nums from n to 98, followed by a new line
 * @n: input value
 * Return: int
 */
void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n > 98)
{
putchar(44);
putchar(32);
}
n--;
}
putchar('\n');
}
else
{
while (n <= 98)
{
printf("%d", n);
if (n < 98)
{
putchar(44);
putchar(32);
}
n++;
}
putchar('\n');
}
}
