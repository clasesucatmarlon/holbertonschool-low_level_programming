#include "holberton.h"
/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: value n
 * Return: int
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
