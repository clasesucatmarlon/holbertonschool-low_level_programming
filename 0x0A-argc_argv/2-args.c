#include <stdio.h>
/**
 * main - function principal
 * @argc: first arg values
 * @argv: second arg matriz
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
