#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: input value pointer
 * @needle: input value pointer
 * Return: value char
 */

char *_strstr(char *haystack, char *needle)
{

	int k = 0, m = 0;
	int b = 0, e = 0, c = 0;

	while (haystack[k] != '\0')
	{
		m = 0;
		b = 1;
		while (needle[m] != '\0')
		{
			if (haystack[k] == needle[m])
			{
				c++;
				b = 0;
				e = k;
			}
			m++;
			if (c == m && b == 0)
				return (&haystack[e + 3]);

		}
		k++;
	}
	return ('\0');
}
