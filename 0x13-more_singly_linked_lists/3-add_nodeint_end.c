#include "lists.h"
/**
 * add_nodeint_end - block
 * Description: add node at the end
 * @head: parameter
 * @n: parameter
 * Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	(*newnode).n = n;
	(*newnode).next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		endnode = *head;
		while ((*endnode).next != NULL)
		{
			endnode = (*endnode).next;
		}
		(*endnode).next = newnode;
	}
	return (newnode);
}
