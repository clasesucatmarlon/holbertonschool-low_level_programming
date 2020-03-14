#ifndef HOLBERTON
#define HOLBERTON

/* task 0 - returns the sum of all its parameters */
int sum_them_all(const unsigned int n, ...);

/* task 1 - prints numbers */
void print_numbers(const char *separator, const unsigned int n, ...);

/* task 2 - print string */
void print_strings(const char *separator, const unsigned int n, ...);

/* task 3 - prints anything */
void print_all(const char * const format, ...);

typedef struct op
{
	char *op;
	void (*f)(char *);
} fmt;

void op_char(char *s);
void op_int(char *s);
void op_string(char *s);
void op_float(char *s);


#endif
