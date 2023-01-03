#include "lists.h"
/**
 * add_nodeint - block
 * Description: add node at the beginning
 * @head: parameter
 * @n: parameter
 * Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	(*newnode).n = n;
	(*newnode).next = *head;
	*head = newnode;
	return (*head);
}
