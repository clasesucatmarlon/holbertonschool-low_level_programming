#include "holberton.h"
#include <stdio.h>
/**
 * main - that finds and prints the sum of the even-valued terms 
 * Return: value zero
 */
int main(void)
{
long int termino1, termino2, terminof, i, acum;
termino1 = 1;
termino2 = 2;
acum = 0;
for (i = 0; i < 48; i++)
{
terminof = termino1 + termino2;
termino1 = termino2;
termino2 = terminof;
if (terminof < 4000000)
{
if ((terminof % 2) == 0)
{
acum = acum + terminof;
}
}
}
acum = acum + 2;
printf("%ld\n", acum);
return (0);
}
