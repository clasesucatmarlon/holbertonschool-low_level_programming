#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function sum elements
 * @n: elements of arguments
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	unsigned int i;
	va_list alist;

	if (n == 0)
	{
		return (0);
	}

	va_start(alist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(alist, unsigned int);
	}

	va_end(alist);
	return (sum);

}
