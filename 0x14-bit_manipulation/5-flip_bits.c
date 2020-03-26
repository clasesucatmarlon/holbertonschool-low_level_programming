#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first number to compare
 * @m: second number to compare
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int aux, cont;

	aux = n ^ m;

	for (cont = 0; aux > 0;)
	{
		if ((aux & 1) == 1)
		{
			cont++;
		}
		aux = aux >> 1;
	}
	return (cont);
}
