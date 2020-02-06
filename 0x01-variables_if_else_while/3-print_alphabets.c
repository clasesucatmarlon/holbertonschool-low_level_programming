#include <stdio.h>
/**
  * main - function principal
  * Return: value zero
  */
int main(void)
{
char inimin, iniMay;
inimin = 'a';
iniMay = 'A';
while (inimin <= 'z')
{
putchar(inimin);
inimin++;
}
putchar('\n');
while (iniMay <= 'Z')
{
putchar(iniMay);
iniMay++;
}
putchar('\n');
return (0);
}
