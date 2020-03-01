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
	int a = 0, i;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]) != 0)
		{
			a = a + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", a);
	return (0);
}
