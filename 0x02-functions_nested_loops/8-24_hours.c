#include "holberton.h"
/**
 * jack_bauer - prints min of the day of Jack Bauer, from from 00:00 to 23:59.
 * Return: value voido
 */
void jack_bauer(void)
{
int n1, n2, n3, n4;
for (n1 = 0; n1 <= 2; n1++)
{
for (n2 = 0; n2 <= 9 ; n2++)
{
for (n3 = 0; n3 < 6; n3++)
{
for (n4 = 0; n4 <= 9; n4++)
{
if (n1 == 2 && n2 > 3)
{
break;
}
else
{
_putchar(n1 + 48);
_putchar(n2 + 48);
_putchar(58);
_putchar(n3 + 48);
_putchar(n4 + 48);
_putchar('\n');
}
}
}
}
}
}
