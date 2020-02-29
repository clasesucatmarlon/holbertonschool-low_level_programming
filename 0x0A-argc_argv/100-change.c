#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - prints the minimum number of coins
  * to make change for an amount of money.
  * @x: input valu
  * Return: int
  */

int main(int argc, char *argv[])
{

	int a, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);

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
	}
return (0);

}
