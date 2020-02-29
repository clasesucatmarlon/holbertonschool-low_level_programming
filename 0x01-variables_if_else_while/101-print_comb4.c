#include <stdio.h>
/**
 *main - print a negative, positive and zero
 *Return: something
 */
int main(void)
{
int num3, num2, num1;
for (num1 = 0; num1 < 10; num1++)
{
for (num2 = 0; num2 < 10; num2++)
{
for (num3 = 0; num3 < 10; num3++)
{
if (!(num3 == num2 && num2 == num1))
{
if (num1 < num2 && num2 < num3)
{
putchar((char)(num1 + 48));
putchar((char)(num2 + 48));
putchar((char)(num3 + 48));
if (!(num3 == 9 && num2 == 8 && num1 == 7))
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
}
return (0);
}
