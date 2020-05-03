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
	dlistint_t *node_tmp, *node_new;
 
	node_new = malloc(sizeof(dlistint_t));
	if (!node_new)
		return (NULL);
	node_new->n = n;
	node_tmp = *h;
	if (!node_tmp)
	{
		node_new->prev = NULL;
		node_new->next = NULL;
		*h = node_new;
		return (node_new);
	}
	if (idx == 0)
	{
		node_new->prev = NULL;
		node_new->next = node_tmp;
		node_tmp->prev = node_new;
		*h = node_new;
		return (node_new);
	}
	for ( ; idx > 1 && node_tmp->next; idx--)
		node_tmp = node_tmp->next;
	if (idx > 1 && !node_tmp->next)
		return (NULL);
	node_new->prev = node_tmp;
	node_new->next = node_tmp->next ? node_tmp->next : NULL;
	if (node_tmp->next)
		node_tmp->next->prev = node_new;
	node_tmp->next = node_tmp->next && idx > 1 ? NULL : node_new;
	return (node_new);
}
