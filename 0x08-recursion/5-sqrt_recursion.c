#include "holberton.h"
int _funcAux(int n2, int x2);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: value input
 * Return: int
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	else
		return (_funcAux(n, 1));
}

/**
 * _funcAux - Function auxiliary for power
 * @n2: receive parameter of n
 * @x2: receive parameter of 1
 * Return: power if found -1 if x2 > n2
 */

int _funcAux(int n2, int x2)
{
	if (x2 > n2)
		return (-1);

	if (x2 * x2 == n2)
		return (x2);
	else
		return (_funcAux(n2, x2 + 1));

}

