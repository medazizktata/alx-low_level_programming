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

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	while (*head->next != NULL)
	{
		*head = *head->next;
	}
	*head->next = new;
	new->next = NULL;
	return (new);

}
