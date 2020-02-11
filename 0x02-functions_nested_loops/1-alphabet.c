#include "holberton.h"
/**
 * main - functión print alphabet
 * Return: 0
 */
void print_alphabet(void)
{
char i = 'a';
while(i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
