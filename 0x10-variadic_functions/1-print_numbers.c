#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function print numbers
 * @separator: variable separators
 * @n: numbers
 * Return: int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{


	va_list list_num;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}
	va_start(list_num, n);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
		printf("%d%s", va_arg(list_num, int), separator);
		}
		else
		{
			 printf("%d", va_arg(list_num, int));
		}
	}
	printf("\n");
	va_end(list_num);

}
