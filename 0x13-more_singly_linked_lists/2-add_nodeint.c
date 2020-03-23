#include "lists.h"
/**
 * add_nodeint - Adds node at the beginning of the list
 * @head: pointer to the beginning of the list
 * @n: number to add to a node
 * Return: A pointer to the head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		newNode->next = NULL;
	}
	else
	{
		newNode->next = *head;
	}
	newNode->n = n;
	*head = newNode;

	return (*head);
}
