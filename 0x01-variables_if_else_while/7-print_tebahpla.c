#include <stdio.h>
/**
  * main - function principal
  * Return: value zero
  */
int main(void)
{
char ini, last;
ini = 'z';
last = 'a';
while (ini >= last)
{
putchar(ini);
ini--;
}
putchar('\n');
return (0);
}
