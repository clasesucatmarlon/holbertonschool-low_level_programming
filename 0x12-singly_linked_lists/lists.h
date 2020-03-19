#ifndef LISTS_HOLBERTON
#define LISTS_HOLBERTON

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


/* Funtión print to character */
int _putchar(char c);

/* task 0 - prints all the elements of a list_t list */
size_t print_list(const list_t *h);

/* task 1 -  returns the number of elements in a linked list_t list */
size_t list_len(const list_t *h);

/* task 2 - adds a new node at the beginning of a list_t list */
list_t *add_node(list_t **head, const char *str);


#endif
