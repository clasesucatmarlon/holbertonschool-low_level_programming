#include "holberton.h"
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated
* space in memory
* @str: input value pointer
* Return: char
*/

char *_strdup(char *str)
{

	char *strcp;
	int i = 0, j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	strcp = malloc(i * sizeof(char));

	if (strcp == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i + 1; j++)
	{
		strcp[j] = str[j];
	}

	return (strcp);
}
