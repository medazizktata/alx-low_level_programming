#include "lists.h"
/**
* delete_dnodeint_at_index - block
* Description: deletes a new node at a given position
* @head: parameter
* @index: parameter4
* Return: int
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int number = 0;

	current = *head;
	if (current == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (index == number)
		{
			if (current->prev != NULL)
				current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		number++;
		current = current->next;
	}
	return (-1);
}
