#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function prints anything
 * Return: void
 */
void op_char(char *s)
{
	printf("%c", s);
}

void op_int(char *s)
{
	printf("%d", s);
}

void op_string(char *s)
{
	printf("%s", s);
}

void op_float(char *s)
{
	printf("%f", s);
}

typedef struct fm
{
	char *op;
	void (*f)(char *);
} fmt;

void print_all(const char * const format, ...)
{

	fmt ops[] = {
	{"c", op_char},
	{"i", op_int},
	{"f", op_float},
	{"s", op_string},
	{NULL, NULL}
	};

	va_list list;
	int i = 0;

	va_start(list, format);

	while (ops[i].op != NULL)
	{
		/*if (*ops[i].op == *format)*/
		if (*ops[i].op == va_arg(list, char *));
		{
			return (ops[i].f);
		}
		
		i++;
	}

		va_end(list);
}