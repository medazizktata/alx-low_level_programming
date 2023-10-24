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
	listint_t *ne;
	unsigned int s;

	if (*head == NULL)
		return (NULL);
	else
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);
		temp = *head;
		s = 0;
		while (temp->next != NULL && s == (idx - 1))
		{
			s++;
			temp = temp->next;
		}
		node->n = n;
		temp->next = ne;
		temp->next = node;
		node->next = ne;
	}
	return (node);
}
