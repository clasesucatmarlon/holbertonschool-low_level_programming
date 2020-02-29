#include <stdio.h>
#include "holberton.h"
/**
 * main - prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081
 * Return: 0
 */
int main(void)
{
long int valor, div, op, aux;
valor = 612852475143;
div = 2;
aux = valor;
while (aux != 1)
{
if ((aux % div) == 0)
{
op = aux / div;
aux = op;
}
else
{
div++;
}
}
printf("%ld", div);
printf("\n");
return (0);
}
