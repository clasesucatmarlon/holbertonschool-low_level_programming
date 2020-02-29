#include <stdio.h>
#include <stdlib.h>
/**
 * main - add two numbers
 * @argc: parameters values
 * @argv: array
 * Return: int
 */

int main(int argc, char *argv[])
{

	int mult;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		mult = a * b;
		printf("%d\n", mult);
	}
	return (0);

}
