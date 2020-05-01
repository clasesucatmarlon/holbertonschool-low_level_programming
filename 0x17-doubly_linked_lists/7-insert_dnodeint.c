#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node in idx
 * @h: head of nodes
 * @idx: index to insert nodes
 * @n: data to insert in new node
 * Return: list with new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node = NULL;
	dlistint_t *tmp_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || h == NULL)
		return (NULL);
	new_node->n = n;
	tmp_node = *h;
	if (idx == 0)
	{
		*h = new_node;
		new_node->next = tmp_node;
		new_node->prev = NULL;
		tmp_node->prev = new_node;
		return (new_node);
	}

	while (tmp_node->next != NULL)
	{
		if (count == idx) /* find position to insert */
		{
			new_node->prev = tmp_node; /* current prev to back link */
			new_node->next = tmp_node->next; /* current next to from link */
			tmp_node->next = new_node; /* back next link */
			new_node->prev = new_node; /* from prev link */
		}
		tmp_node = tmp_node->next;
		count++;
	}
	if (count < idx)
	{
		free(new_node);
		return (NULL);
	}

	return (new_node);
}
