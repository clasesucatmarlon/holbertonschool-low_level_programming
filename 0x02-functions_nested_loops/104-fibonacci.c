#include "holberton.h"
#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: value zero
 */
int main(void)
{
float termino1, termino2, terminof, c;
termino1 = 1;
termino2 = 2;
printf("%.f", termino1);
printf(", ");
printf("%.f", termino2);
printf(", ");
for (c = 0; c < 96; c++)
{
terminof = termino1 + termino2;
printf("%.f", terminof);
if (!(c == 95))
printf(", ");
termino1 = termino2;
termino2 = terminof;
}
printf("\n");
return (0);
}
