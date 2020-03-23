#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to a list
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int c;

	if (h == NULL)
		return (0);
	for (c = 0; h != NULL; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
