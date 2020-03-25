#ifndef LIST_HOLBERTON
#define LIST_HOLBERTON

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Function for create New Node */
listint_t *createNewNode(const int n);
listint_t *createNewNode2(int n);

/* Function for determinate large of string */
int large(const char *str);

/* task 0 - prints all the elements of a listint_t list. */
size_t print_listint(const listint_t *h);

/* task 1 - returns the number of elements in a linked listint_t list.*/
size_t listint_len(const listint_t *h);

/* task 2 - adds a new node at the beginning of a listint_t list. */
listint_t *add_nodeint(listint_t **head, const int n);

/* task 3 -  adds a new node at the end of a listint_t list */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* task 4 - frees a listint_t list (one pointer) */
void free_listint(listint_t *head);

/* task 5 - frees a listint_t list (two pointer) */
void free_listint2(listint_t **head);

/* task 6 - deletes the head node of a listint_t linked list, */
/* and returns the head node’s data (n). */
int pop_listint(listint_t **head);

/* task 7 - unction that returns the nth node of a listint_t linked list*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* task 8 - returns the sum of all the data (n) of a listint_t linked list.*/
int sum_listint(listint_t *head);

/* task 9 - inserts a new node at a given position */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* task 10 - deletes the node at index index of a listint_t linked list */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/* task 100 - reverses a listint_t linked list */
listint_t *reverse_listint(listint_t **head);

/* task 101 - prints a listint_t linked list */
size_t print_listint_safe(const listint_t *head);

/* task 102 - frees a listint_t list */
size_t free_listint_safe(listint_t **h);

/* task 103 - finds the loop in a linked list */
listint_t *find_listint_loop(listint_t *head);

#endif
