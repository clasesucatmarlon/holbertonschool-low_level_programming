#include "holberton.h"
/**
 * factorial - factorial of number
 * @n: input value variable int
 * Return: int
 */

int factorial(int n)
{

	int f = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (f);
	}
	else
	{
		f = n * factorial(n - 1);
	}
	return (f);
}


