#include "holberton.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: char pointer s
 * @b: char var b
 * @n: unsigned var n
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);


}
