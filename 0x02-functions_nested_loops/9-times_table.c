#include "holberton.h"
/**
 * times_table - function prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
int i, j, prod;
prod = 1;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
prod = i * j;
if (prod > 9)
{
_putchar(44);
_putchar(32);
_putchar((char) (prod / 10) + 48);
_putchar((char) (prod % 10) + 48);
}
else
{
if (j > 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar((char) (prod + 48));
}
}
_putchar('\n');
}
}
