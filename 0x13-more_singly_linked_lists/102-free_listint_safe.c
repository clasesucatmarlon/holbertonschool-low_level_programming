#include "lists.h"
/**
 * free_listint_safe - frees linked list safe version
 * @h: input head of linked list
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0, j;
	listint_t *aux, *control, *copy = *h;

	while (*h)
	{
		i++;
		aux = *h;
		*h = (*h)->next;
		free(aux);
		control = copy;
		j = 0;
		while (j < i)
		{
			if (*h == control)
			{
				*h = NULL;
				return (i);
			}
			control = control->next;
			j++;
		}
	}
	return (i);
}
