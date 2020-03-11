#include <stdlib.h>
#include "function_pointers.h"
void print_name(char *name, void (*f)(char *));

/**
 * print_name - print name
 * @name: name input
 * @f: pointer function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{

	(*f)(name);

}
