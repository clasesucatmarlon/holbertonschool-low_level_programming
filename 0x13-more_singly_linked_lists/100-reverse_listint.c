#include "lists.h"
/**
 * reverse_listint - Reverses a singly linked list
 * @head: pointer to the first element of the reversed list
 * Return: A pointer to the first element of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *a_Node = NULL;
	listint_t *p_Node;

	while (head && *head)
	{
		p_Node = (*head)->next;
		(*head)->next = a_Node;
		a_Node = *head;
		*head = p_Node;
	}
	*head = a_Node;
	return (*head);
}
