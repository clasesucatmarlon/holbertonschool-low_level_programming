#include "lists.h"

/**
 * add_node - Creates a node and adds it to a linked list
 * @head: Pointer to head of the linked list
 * @str: String to assigned to the node
 * Return: Pointer to the head of the linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	/*Initialize the next pointer witch NULL*/
	if (*head == NULL)
		newNode->next = NULL;
	else
		/*Asigned head to newNode*/
		newNode->next = *head;
	newNode->str = strdup(str);
	newNode->len = large(str);
	*head = newNode;
	return (*head);
}

/**
 * large - determinate long of string
 * @str: String to assigned to the node
 * Return: large of string
 */
int large(const char *str)
{

	int l;

	if (str == NULL)
		return (0);

	while (str[l] != '\0')
	{
		l++;
	}

	return (l);
}
