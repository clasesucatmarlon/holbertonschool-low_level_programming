#include <stdio.h>
/**
  * main - function principal
  * Return: value zero
  */
int main(void)
{
int num1, num2;
for (num1 = 0; num1 < 10; num1++)
{
for (num2 = 0; num2 < 10; num2++)
{
if (!(num1 == num2))
{
if (num1 < num2)
{
putchar((char) (num1 + 48));
putchar((char) (num2 + 48));
if (!((num1 == 8) && (num2 == 9)))
{
putchar(44);
putchar(32);
}
else
{
putchar('\n');
}
}
}
}
}
return (0);
}
