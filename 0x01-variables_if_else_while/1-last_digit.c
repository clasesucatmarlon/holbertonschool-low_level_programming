#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - function principal
 * Return: value zero
 */
int main(void)
{
int n, rest;
srand(time(0));
n = rand() - RAND_MAX / 2;
rest = (n % 10);
/* your code goes there */
if (rest > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, rest);
}
else if (rest == 0)
{
printf("Last digit of %d is %d and is 0\n", n, rest);
}
else if ((rest > 6) && (rest != 0))
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rest);
}
return (0);
}
