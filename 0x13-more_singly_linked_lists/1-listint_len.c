#include "lists.h"

/**
 * listint_len - Calculates the length of a list
 * @h: Pointer to the begining of the list
 * Return: Returns the amount of nodes
 */
size_t listint_len(const listint_t *h)
{

	unsigned int c;

	if (h == NULL)
	{
		return (0);
	}
	for (c = 0; h != NULL; c++)
	{
		h = h->next;
	}
	return (c);
}
