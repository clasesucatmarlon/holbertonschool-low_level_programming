#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - print arguments
 * @ac: numbers of args
 * @av: array of args
 * Return: char
 */

char *argstostr(int ac, char **av)
{

	char *clain;
	int i = 0, j = 0, k = 0, large = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			large++;
		}
	}
	large = large + ac;

	clain = malloc(large * sizeof(char) + 1);

	if (clain == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			clain[k] = av[i][j];
			k++;
		}
		if (clain[k] == '\0')
		{
			clain[k++] = '\n';
		}
	}
	return (clain);
}
