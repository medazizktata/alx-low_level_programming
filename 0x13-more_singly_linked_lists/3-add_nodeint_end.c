#include "lists.h"
/**
* add_nodeint_end - block
* Description: adds a new node at the end of a listint
* @head: parameter1
* @n: parameter2
* Return: pointer to listint_t
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *h = *head

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free (new);
		return (NULL);
	}
	new->n = n;
	if (h == NULL)
	{
		h = new;
	}
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = new;
	new->next = NULL;
	return (h);

}
