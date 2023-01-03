#include "lists.h"
/**
 * pop_listint - block
 * Description: deletes head
 * @head: parameter
 * Return: node
 */
int pop_listint(listint_t **head)
{
	int s;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	s = (**head).n;
	*head = (**head).next;
	free(*head);
	return (s);
}
