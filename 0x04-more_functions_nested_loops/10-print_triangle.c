#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: input value
 * Return: void
 */
void print_triangle(int size)
{
int i, l, m, aux1;
aux1 = 1;
for (l = 0; l < size; l++)
{
for (i = 0; i < size - aux1; i++)
{
_putchar(32);
}
for (m = 1; m <= aux1; m++)
{
_putchar(35);
}
aux1++;
_putchar('\n');
}
_putchar('\n'); 
}
