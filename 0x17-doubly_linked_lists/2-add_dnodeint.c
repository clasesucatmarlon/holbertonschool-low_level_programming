#include "lists.h"

/**
 * add_dnodeint - add new node al the begginig of list
 * @head: double pointe to head of nodes
 * @n: node data
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp_node = NULL;
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	tmp_node = *head;
	*head = new_node;
	new_node->next = tmp_node;

	if (tmp_node != NULL)
	{
		tmp_node->prev = *head;
	}
	return (new_node);
}
