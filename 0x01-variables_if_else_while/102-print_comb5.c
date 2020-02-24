#include <stdio.h>
/**
 * main - main principal
 * Return: value zero
 */
int main(void)
{
int num1, num2, num3, num4;
int aux1, aux2;
for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 0; num2 <= 9; num2++)
{
aux1 = num1;
aux2 = num2;
for (num3 = aux1; num3 <= 9; num3++)
{
num4 = aux2 + 1;
while (num4 <= 9)
{
putchar((char) (num1 + 48));
putchar((char) (num2 + 48));
putchar(32);
putchar((char) (num3 + 48));
putchar((char) (num4 + 48));
if (!(num1 == 9 && num2 == 8 && num3 == 9 && num4 == 9))
{
putchar(44);
putchar(32);
}
num4++;
}
 aux2 = -1;
}
if (num1 == 9 && num2 == 8)
	break;
}
}
putchar('\n');
return (0);
}
