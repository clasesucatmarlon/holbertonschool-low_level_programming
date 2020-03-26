#ifndef HOLBERTON
#define HOLBERTON

#include <stdlib.h>
#include <stdio.h>

/* task 0 - converts a binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* task 1 - prints the binary representation of a number */
void print_binary(unsigned long int n);

/* task 2 - returns the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* task 3 - sets the value of a bit to 1 at a given index */
int set_bit(unsigned long int *n, unsigned int index);

/* task 4 - sets the value of a bit to 0 at a given index */
int clear_bit(unsigned long int *n, unsigned int index);

/* task 5 - returns the number of bits you would need to */
/*flip to get from one number to another */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
