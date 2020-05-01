#include "lists.h"

/**
 * dlistint_len - count numbers of nodes
 * @h: head of node
 * Return: numbers of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
