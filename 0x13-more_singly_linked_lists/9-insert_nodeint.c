#include "lists.h"
/**
 * insert_nodeint_at_index - block
 * Description: add node at given position
 * @head: parameter
 * @idx: index
 * @n: int
 * Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	(*newnode).n = n;
	(*newnode).next = NULL;
	if (idx == 0)
	{
		(*newnode).next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (*head == NULL)
		{
			free(newnode);
			return (NULL);
		}
		*head = (**head).next;
	}

	(*newnode).next = (**head).next;
	(**head).next = newnode;
	return (newnode);
}
