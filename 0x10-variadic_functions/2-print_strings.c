#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function print string
 * @separator: variable separators
 * @n: numbers
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list strList;
	unsigned int i;
	char *p;

	va_start(strList, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(strList, char *);
		if (p != NULL)
			printf("%s", p);
		else
		{
			printf("(nil)");
		}
		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(strList);
}
