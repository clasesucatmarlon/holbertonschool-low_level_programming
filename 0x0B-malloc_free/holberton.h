#ifndef HOLBERTON_H
#define HOLBERTON_H

/* task 0 - create_array */
char *create_array(unsigned int size, char c);

/* task 1 - eturns a pointer to a newly allocated */
char *_strdup(char *str);

/* task 2 - concatened two string */
char *str_concat(char *s1, char *s2);

/* task 3 - ret a ptr to a 2 dimens array of int*/
int **alloc_grid(int width, int height);

/* task 4 - frees a 2 dimensional grid previously
created by your alloc_grid*/
void free_grid(int **grid, int height);

#endif
