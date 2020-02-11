#include "holberton.h"
/**
 * _islower - Funtion checks for lowercase character
 * Return: 1
 * @c: Input value
 */
int _islower(int c)
{
if ((c >= 97) && (c <= 122))
{
return (1);
}
else
{
return (0);
}
}
