#include "holberton.h"
#include <stdio.h>
/**
 *main - do something
 *Return: something
 */
int main(void)
{
long int termino1, termino2, terminof, i;
termino1 = 1;
termino2 = 2;
printf("%ld, ", termino1);
printf("%ld, ", termino2);
for (i = 0; i < 48; i++)
{
terminof = termino1 + termino2;
printf("%ld", terminof);
if (!(i == 47))
printf(", ");
termino1 = termino2;
termino2 = terminof;
}
printf("\n");
return (0);
}
