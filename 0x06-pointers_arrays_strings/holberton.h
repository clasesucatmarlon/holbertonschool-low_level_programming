#ifndef HOLBERTON
#define HOLBERTON

/* task 0 - concatenates two strings */
char *_strcat(char *dest, char *src);

/* task 1 - concatenates two strings */
char *_strncat(char *dest, char *src, int n);

/* task 2 - copies a string */
char *_strncpy(char *dest, char *src, int n);

/* task 3 - compares two strings */
int _strcmp(char *s1, char *s2);

/* task 4 - reverses the content of an array of integers */
void reverse_array(int *a, int n);

/* task 5 - changes all lowercase letters of a string to uppercase */
char *string_toupper(char *);

/* task 6 - capitalizes all words of a string */
char *cap_string(char *);

/* task 7 - encodes a string into 1337 */
char *leet(char *);

#endif
