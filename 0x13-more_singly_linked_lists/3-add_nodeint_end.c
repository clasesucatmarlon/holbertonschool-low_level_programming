#include "lists.h"
listint_t *create_node(const int n);

/**
 * add_nodeint_end - Adds a node at the end of a list
 * @head: Pointer to the beginning of a list
 * @n: number to add to the node
 * Return: A pointer to the beginning of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *aux;

	aux = *head;
	if (head == NULL)
		return (NULL);

	newNode = createNewNode(n);

	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	while (aux->next != NULL)
		aux = aux->next;

	aux->next = newNode;

	return (*head);
}

/**
 * createNewNode - Creates a new node.
 * @n: number to add to the node.
 * Return: A pointer to the allocated memory
 */

listint_t *createNewNode(const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	return (newNode);
}
