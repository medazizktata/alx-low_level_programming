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
	if (*head != NULL)
	{
		*head->n = n;
		return (*head);
	}
	else
	{
		*head->next = *head;
		*head->n = n;
		*head = *head->next;
		return (*head);
	}
}
