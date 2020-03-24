#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at a designated index
 * @head: Pointer to the beginning of the list
 * @index: Index of the node to be freed
 * Return: 1 if susccessful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i;
	listint_t *aux;
	listint_t *node;

	aux = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && aux != NULL && index != 0; i++)
		aux = aux->next;
	if (aux == NULL)
		return (-1);
	if (index == 0)
	{
		node = aux->next;
		free(aux);
		*head = node;
	}
	else
	{
		if (aux->next == NULL)
			node = aux->next;
		else
			node = aux->next->next;
		free(aux->next);
		aux->next = node;
	}
	return (1);
}
