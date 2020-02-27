#include "holberton.h"
int _strlen_recursion(char *s);
int paliAux(char *s, int i2, int large2);

/**
 * is_palindrome - 1 if a string is a palindrome, 0 not
 * @s: input value pointer
 * Return: int
 */

int is_palindrome(char *s)
{

	int v = 0, large = 0;

	large = _strlen_recursion(s) - 1;
	return (paliAux(s, v, large));
}

/**
 * _strlen_recursion - Determine long of string
 * @s: input value pointer
 * Return: long of s
 */

int _strlen_recursion(char *s)
{

	int i = 0;

	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1);
		i++;
	}

	return (i);
}

/**
 * paliAux - Function for comparations of char
 * @s: input value pointer
 * @i2: input value of i
 * @large2: input value long
 * Return: int
 */

int paliAux(char *s, int i2, int large2)
{

	int  valor = 0;

	if (large2 == 1)
		return (1);

	if (s[large2] != s[i2])
		return (0);

	if (s[large2] == s[i2])
	{
		large2--;
		i2++;
		valor = paliAux(s, i2, large2);
	}
	return (valor);
}
