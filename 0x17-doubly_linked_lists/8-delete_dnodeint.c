#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: double pointer to head of nodes
 * @index: position of index to deete
 * Return: list with deleted node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp_node = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp_node);
		return (1);
	}

	while (tmp_node->next != NULL)
	{
		if (count == index)
		{
			tmp_node->next->prev = tmp_node->prev;
			tmp_node->prev->next = tmp_node->next;
			free(tmp_node);
			return (1);
		}
		tmp_node = tmp_node->next;
		count++;
	}
	return (-1);
}
