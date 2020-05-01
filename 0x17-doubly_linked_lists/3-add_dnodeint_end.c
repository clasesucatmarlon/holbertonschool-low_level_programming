#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of list
 * @head: double pointer to head of node
 * @n: node data
 * Return: new node at the end
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp_node = NULL;
	dlistint_t *new_node = NULL;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	tmp_node = *head;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}

	while (tmp_node->next != NULL)
	{
		tmp_node = tmp_node->next;
	}

	tmp_node->next = new_node;
	new_node->prev = tmp_node;

	return (new_node);
}
