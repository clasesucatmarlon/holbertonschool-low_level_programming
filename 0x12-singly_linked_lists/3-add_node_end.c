#include "lists.h"

/**
 * add_node_end - Adds a node at the end of a linked list.
 * @head: pointer to the first node of a linked list.
 * @str: String to include in the node.
 * Return: A pointer to the head of the linked list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *newNode;

	tmp = *head;
	if (head == NULL)
		return (NULL);

	newNode = createNewNode(str);
	if (newNode == NULL)
		return (NULL);

	/*Initilizing the list with the first node*/
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newNode;

	return (*head);
}

/**
 * createNewNode - Creates a new node.
 * @str: String to add to the node.
 * Return: A pointer to the allocated memory
 */

list_t *createNewNode(const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = large(str);
	newNode->next = NULL;
	return (newNode);
}

/**
 * large - determinate long of string
 * @str: String to assigned to the node
 * Return: large of string
 */

int large(const char *str)
{

	int l;

	while (str[l] != '\0')
	{
		l++;
	}

	return (l);
}
