#include "lists.h"
/**
* insert_nodeint_at_index - block
* Description: inserts a new node at a given position
* @head: parameter1
* @idx: parameter2
* @n: parameter3
* Return: pointer to listint_t
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *temp;
	unsigned int s;

	if (*head == NULL && idx != 0)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	temp = *head;
	s = 0;
	node->n = n;
	if (idx != 0)
	{
		while (temp->next != NULL && s != (idx - 1))
		{
			s++;
			temp = temp->next;
		}
	}
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = temp->next;
		temp->next = node;
	}
	return (node);
}
