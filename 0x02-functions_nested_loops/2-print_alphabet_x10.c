#include "holberton.h"
/**
 * print_alphabet_x10 - Print alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
int i;
char x = 'a';
for (i = 0; i <= 9; i++)
{
while (x <= 'z')
{
_putchar(x);
x++;
}
x = 'a';
_putchar('\n');
}
}
