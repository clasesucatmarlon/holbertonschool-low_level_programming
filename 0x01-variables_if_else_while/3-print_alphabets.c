#include <stdio.h>
/**
  * main - function principal
  * Return: value zero
  */
int main(void)
{
char inimin, lastmin, iniMay, lastMay;
inimin = 'a';
lastmin = 'z';
iniMay = 'A';
lastMay = 'Z';
while (inimin <= lastmin)
{
putchar(inimin);
inimin++;
}
putchar('\n');
while (iniMay <= lastMay)
{
putchar(iniMay);
iniMay++;
}
putchar('\n');
return (0);
}
