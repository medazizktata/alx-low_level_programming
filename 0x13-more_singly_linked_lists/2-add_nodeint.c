#include "lists.h"
/**
* add_nodeint - block
* Description: adds a new node at the beginning of a listint_t list
* @head: parameter1
* @n: parameter2
* Return: pointer to listint_t
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->newt = *head;
	*head = new;
	return (*head);
}
