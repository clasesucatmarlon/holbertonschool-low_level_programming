#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add numbers positives
 * @argc: parameters values
 * @argv: array arg
 * Return: int
 */

int main(int argc, char *argv[])
{

	int i = 1, sum = 0;


	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; ++i)
		{
			if (isalpha(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
