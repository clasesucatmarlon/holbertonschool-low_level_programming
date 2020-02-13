#include <stdio.h>
#include "holberton.h"
/**
 * main - Fizz-Buzz test
 * Return: 0
 */
int main(void)
{
  int i;

for (i = 1; i < 101; i++)
{

if (i % 3 == 0)
{
printf("Fizz ");
}

if (i % 5 == 0)
{
  if (i == 100)
    {
      printf("Buzz");
    }
    else
    {
      printf("Buzz ");
    }
}


if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz ");
}

if (!(i % 3 == 0 || i % 5 == 0))
{
printf("%d ", i);
}

}
printf("\n");
return (0);
}
