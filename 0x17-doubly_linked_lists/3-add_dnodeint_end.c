#include "lists.h"
/**
* add_dnodeint_end - block
* Description: adds a new node at the end of a dlistint_t list
* @head: parameter
* @n: parameter
* Return: pointer to dlistint_t
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
	}
	else
	{
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
		(*head)->next = new;
	}
	return (new);
}
