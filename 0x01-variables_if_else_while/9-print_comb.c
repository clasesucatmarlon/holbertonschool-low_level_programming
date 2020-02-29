#include <stdio.h>
/**
  * main - function principal
  * Return: value zero
  */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar((char) (num + 48));
if (num < 9)
{
putchar(44);
putchar(32);
}
if (num == 9)
{
putchar('\n');
}
}
return (0);
}
