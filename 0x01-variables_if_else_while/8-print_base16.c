#include <stdio.h>
/**
  * main - function principal
  * Return: value zero
  */
int main(void)
{
int num;
char ini;
ini = 'a';
for (num = 0; num < 10; num++)
{
putchar((char) (num + 48));
}
while (ini <= 'f')
{
putchar(ini);
ini++;
}
putchar('\n');
return (0);
}
