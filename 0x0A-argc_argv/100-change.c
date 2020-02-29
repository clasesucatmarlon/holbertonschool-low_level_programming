#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int chang(int x, int c);

/**
  * main - prints the minimum number of coins
  * to make change for an amount of money.
  * @argc: input value
  * @argv: input arrays
  * Return: int
  */

int main(int argc, char *argv[])
{

	int x, cont = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		chang(x, cont);
	}
	return (0);
}

/**
  * chang - function auxiliary
  * @a: value a
  * @c: input valu
  * Return: int
  */

int chang(int a, int c)
{
	if (a < 0)
	{
		printf("0\n");
	}
	else
	{
		while (a > 0)
		{
			if (a >= 25)
			{
				c++;
				a = a - 25;
			}
			else if (a >= 10)
			{
				c++;
				a = a - 10;
			}
			else if (a >= 5)
			{
				c++;
				a = a - 5;
			}
			else if (a >= 2)
			{
				c++;
				a = a - 2;
			}
			else
			{
				c++;
				a = a - 1;
			}
			if (a == 0)
			{
				break;
			}
		}
		printf("%d\n", c);
	}
return (0);
}
