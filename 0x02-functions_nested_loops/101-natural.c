#include "holberton.h"
#include <stdio.h>
/**
 * main - list all the natural numbers below 10 that are multiples of 3 or 5
 * Return: valur zero
 */
int main(void)
{
int suma5, c5, c3, suma3, total;
suma5 = 0;
suma3 = 0;
c5 = 5;
c3 = 3;
while (c5 < 1024)
{
suma5 = suma5 + c5;
c5 = c5 + 5;
}
while (c3 < 1024)
{
if (((c3 % 10) == 5) || ((c3 % 10) == 0))
suma3 = suma3;
else
suma3 = suma3 + c3;
c3 = c3 + 3;
}
total = suma5 + suma3;
printf("%d\n", total);
return (0);
}
