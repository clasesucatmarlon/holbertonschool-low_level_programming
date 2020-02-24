#ifndef HOLBERTON
#define HOLBERTON

/* Print character */
int _putchar(char c);

/* task 0 - takes a pointer to an int as parameter and updates the value it points to to 98 */
void reset_to_98(int *n);

/* task 1 - Change two numbers */
void swap_int(int *a, int *b);

/* task 2 - returns the length of a string */
int _strlen(char *s);

/* task 3 - prints a string, followed by a new line, to stdout */
void _puts(char *str);

/* task 4 - prints a string, in reverse */
void print_rev(char *s);

/* task 5 - reverses a string */
void rev_string(char *s);

/* task 6 - prints every other character of a string, starting with the first character */
void puts2(char *str);

/* task 7 - prints half of a string */
void puts_half(char *str);

/* task 8 - prints n elements of an array of integers */
void print_array(int *a, int n);

/* task 9 - copies the string pointed to by src to buffer pointed to by dest */
char *_strcpy(char *dest, char *src);

#endif
