#include "lists.h"
/**
* get_dnodeint_at_index - block
* Description: returns the nth node of a dlistint_t linked list
* @head: parameter
* @index: parameter
* Return: pointer to dlistint_t
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
