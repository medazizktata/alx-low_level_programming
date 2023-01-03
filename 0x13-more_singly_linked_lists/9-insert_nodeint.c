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
	listint_t *node;

	if (head == NULL)
		return (NULL);
	for (i = 0; (head != NULL) && (i < idx); i++)
	{
		*head = (**head).next;
	}
	if (i != idx)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	node = (**head).next;
	(**head).next = newnode;
	(*newnode).n = n;
	(*newnode).next = node;
	return (newnode);
}
