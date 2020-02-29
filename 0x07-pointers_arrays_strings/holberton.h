#ifndef HOLBERTON
#define HOLBERTON

/* Function Putchar */
int _putchar(char c);

/* task 0 - fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);

/* task 1 - copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* task 2 - locates a character in a string */
char *_strchr(char *s, char c);

/* task 3 - gets the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);

/* task 4 - searches a string for any of a set of bytes */
char *_strpbrk(char *s, char *accept);

/* task 5 - locates a substring */
char *_strstr(char *haystack, char *needle);

/* task 7 - prints the chessboard */
void print_chessboard(char (*a)[8]);

/* task 8 - prints the sum of the two diagonals of a square matrix of integers */
void print_diagsums(int *a, int size);

/* task 9 - sets the value of a pointer to a char. */
void set_string(char **s, char *to);

#endif
