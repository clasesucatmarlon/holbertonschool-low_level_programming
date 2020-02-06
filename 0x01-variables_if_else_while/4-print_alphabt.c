#include <stdio.h>
/**
 * main - function principal
 * Return: value zero
 */
int main(void)
{
char ini;
ini = 'a';
while (ini <= 'z')
{
if ((ini != 'q') && (ini != 'e'))
{
putchar(ini);
}
ini++;
}
putchar('\n');
return (0);
}
