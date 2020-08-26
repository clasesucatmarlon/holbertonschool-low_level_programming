#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>




int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);


void func_print_array(int const *left, int const *right);
int jump(int *array, int start, int end, int size, int value);
#endif /* SEARCH_ALGOS_H */