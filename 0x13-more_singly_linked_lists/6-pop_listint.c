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
	listint_t *pop_node;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	pop_node = *head;
	s = (**head).n;
	*head = (**head).next;
	free(pop_node);
	return (s);
}
