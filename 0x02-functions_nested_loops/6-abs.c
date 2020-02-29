#include "holberton.h"
/**
 * _abs - function computes the absolute value of an integer
 * Return: int
 * @n: value init
 */
int _abs(int n)
{
if (n < 0)
{
return (n * (-1));
}
else if (n == 0)
{
return (0);
}
else
{
return (n);
}
}
