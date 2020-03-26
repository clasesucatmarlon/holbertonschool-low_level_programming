#include "lists.h"
/**
 * find_listint_loop - finds the loop inside of a linked list
 * @head: start of linked list
 * Return: address of node where loop begins
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *aux = head, *control;

	if (!head)
		return (NULL);

	if (head == head->next)
		return (head);

	while (aux)
	{
		aux = aux->next;
		control = head;
		while (aux && control != aux)
		{
			if (control == aux->next)
				return (control);
			control = control->next;
		}
	}
	return (aux);
}
