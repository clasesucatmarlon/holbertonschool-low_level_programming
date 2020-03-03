#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int _isdigit(char *s);

/**
 * main - add numbers positives
 * @argc: parameters values
 * @argv: array arg
 * Return: int
 */

int main(int argc, char *argv[])
{

	int i, s;

	if (argv == 0)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
		{
			s = s + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", s);
	return (0);
}

/**
  * _isdigit - function for determine if is number
  * @s: array of size argc
  * Return: int
  */

int _isdigit(char *s)
{

	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		s++;
	}
	return (1);
}
