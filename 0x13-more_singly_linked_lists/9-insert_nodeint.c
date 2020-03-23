#include "lists.h"
listint_t *create_new_node(int n);
/**
 * insert_nodeint_at_index - Inserts a node at a given index
 * @head: Pointer to the first element of the list
 * @idx: Index to insert a node at
 * @n: number to be inserted into the node
 * Return: The address of the newly created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *aux;
	listint_t *node_old;
	listint_t *newNode;

	aux = *head;
	if (head == NULL)
		return (NULL);
	newNode = createNewNode2(n);
	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	if (idx == 0)
		*head = newNode;
	for (i = 0; i < idx - 1 && aux != NULL && idx != 0; i++)
		aux = aux->next;
	if (aux == NULL)
		return (NULL);
	if (idx == 0)
		newNode->next = aux;
	else
	{
		node_old = aux->next;
		aux->next = newNode;
		newNode->next = node_old;
	}
	return (newNode);
}

/**
 * createNewNode2 - Creates a new node.
 * @n: number to add to the node.
 * Return: A pointer to the allocated memory
 */

listint_t *createNewNode2(int n)
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
