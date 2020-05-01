#include "lists.h"

/**
 * get_dnodeint_at_index - data of node
 * @head: head of nodes
 * @index: index to find
 * Return: data of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			break;
		}
		count++;
		head = head->next;
	}
	return (head);
}
