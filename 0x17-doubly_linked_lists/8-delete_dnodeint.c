#include "lists.h"
/**
* delete_dnodeint_at_index - block
* Description: deletes a new node at a given position
* @h: parameter
* @idx: parameter4
* @n: parameter
* Return: pointer to dlistint_t
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int inde)
{
	dlistint_t *current;
	unsigned int number = 0;

	current = *h;
	if (current == NULL && idx != 0)
	{
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
