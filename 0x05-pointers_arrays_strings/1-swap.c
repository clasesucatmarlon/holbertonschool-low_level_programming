#include "holberton.h"
/**
 * swap_int - Change two numbers
 * @a: first value
 * @b: second value
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
