#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node in idx
 * @h: head of nodes
 * @idx: index to insert nodes
 * @n: data to insert in node_new node
 * Return: list with node_new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new, *runner;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	count = 0;
	runner = *h;
	while (count < idx - 1)
	{
		if (runner == NULL)
			return (NULL);
		count++;
		runner = runner->next;
	}
	if (runner->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	else
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = runner->next;
		new->next->prev = new;
		runner->next = new;
		new->prev = runner;
	}
	return (new);
}
