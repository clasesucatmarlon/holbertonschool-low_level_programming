#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: input pointer char
 * @accept: input pointer char
 * Return: unisigned
 */

unsigned int _strspn(char *s, char *accept)
{

	int k = 0, m = 0;
	int c = 0, b = 0;

	while (s[k] != '\0')
	{
		m = 0;
		b = 1;
		while (accept[m] != '\0')
		{
			if (s[k] == accept[m])
			{
				c++;
				b = 0;
			}
			m++;
		}
		if (b == 1)
			break;
	k++;
	}

	return (c);
}

