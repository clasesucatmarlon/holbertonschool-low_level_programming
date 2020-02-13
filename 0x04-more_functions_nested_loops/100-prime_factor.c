#include <stdio.h>
#include "holberton.h"
/**
 * main - prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081
 * Return: 0
 */
int main(void)
{
long long int valor, i, div, aux, op, num;
valor = 612852475143;
div = 2;
aux = valor;
while (aux != 1)
{
if (aux % div == 0)
{
op = aux / div;
printf("%lld / %lld = %lld", aux, div, op);
printf("\n");
aux = op;
num = div;
}
else
{
div++;
}
}
printf("el numero buscado es %lld\n ", div);
}
