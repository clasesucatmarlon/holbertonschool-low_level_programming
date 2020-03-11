#include <stdlib.h>
#ifndef HOLBERTON
#define HOLBERTON

/* task 0 - print name */
void print_name(char *name, void (*f)(char *));

/* task 1 - executes a function given as a parameter
on each element of an array */
void array_iterator(int *array, size_t size, void (*action)(int));

/* task 2 - searches for an integer */
int int_index(int *array, int size, int (*cmp)(int));

#endif
