#include "holberton.h"
/**
 * print_diagonal - functión print diagonal
 * @n: value input
 * Return: 0
 */
void print_diagonal(int n)
{
int i, j, aux;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
aux = i;
for (j = 0; j < aux; j++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
