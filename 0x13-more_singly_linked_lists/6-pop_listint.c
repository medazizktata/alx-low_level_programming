#include "lists.h"
/**
* pop_listint - block
* Description: deletes the head node of a listint_t
* @head: parameter
* Return: int
*/
int pop_listint(listint_t **head)
{
	listint_t *ne;
	listint_t *h;
	int s;

	if (*head == NULL)
	{
		return (0);
	}
	else {
		h = *head;
		ne = h->next;
		h->next = NULL;
		s = h->n;
		free (h);
		h = ne;
		return (s);
	}
}
