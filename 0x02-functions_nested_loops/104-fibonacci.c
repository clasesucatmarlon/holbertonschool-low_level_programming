#include "holberton.h"
#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: value zero
 */
int main(void)
{
long double termino1, termino2, terminof, c;
termino1 = 1;
termino2 = 2;
printf("%Lf", termino1);
printf(", ");
printf("%Lf", termino2);
printf(", ");
for (c = 0; c < 96; c++)
{
terminof = termino1 + termino2;
if (c != 95)
{
printf("%Lf, ", terminof);
}
else
{
printf("%Lf", terminof);
}
termino1 = termino2;
termino2 = terminof;
}
printf("\n");
return (0);
}
