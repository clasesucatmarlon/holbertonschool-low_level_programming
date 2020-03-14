#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function prints anything
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *p;
	int x = 0, flags = 1;
	va_list strList;

	va_start(strList, format);
	while (format && format[x])
	{
	  
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(strList, int));
				break;
			case 'i':
				printf("%d", va_arg(strList, int));
				break;
			case 'f':
				printf("%f", va_arg(strList, double));
				break;
			case 's':
			p = va_arg(strList, char*);
			if (p != NULL)
			{
				printf("%s", p);
				break;
			}
			printf("(nill)");
			break;
			default:
				flags = 0;
		}
			if (format[x + 1] != 0 && flags)
				printf(", ");
			x++;
			flags++;
	}
	printf("\n");
	va_end(strList);
}