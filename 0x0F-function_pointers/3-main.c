#include <stdio.h>
#include "calc.h"
#include <stdlib.h>

/**
 * main - function principal
 * @argc: numbers of parameters
 * @argv: arrays of arguments
 * Return: int
 */


int main(int argc, char *argv[])
{

	int num1, num2;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] != '+' && *argv[2] != '-'
		&& *argv[2] != '*' && *argv[2] != '/'
		&& *argv[2] != '%') || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}


	if ((*argv[2] == '/' || *argv[2] == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(num1, num2));

	return (0);
}
