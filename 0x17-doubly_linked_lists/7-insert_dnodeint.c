#include "lists.h"
/**
* insert_dnodeint_at_index - block
* Description: inserts a new node at a given position
* @h: parameter
* @idx: parameter4
* @n: parameter
* Return: pointer to dlistint_t
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int number = 0;

	current = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (current == NULL || idx != 0)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		add_dnodeint(&new, n);
		return (new);
	}
	while (current != NULL)
	{
		if (idx == number)
		{
			new->n = n;
			new->prev = current->prev;
			new->next = current;
			if (current->prev != NULL)
				current->prev->next = new;
			else
				*h = new;
			current->prev = new;
			return (new);
		}
		number++;
		current = current->next;
	}
	free(new);
	return (NULL);
}
