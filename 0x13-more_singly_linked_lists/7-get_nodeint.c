#include "lists.h"
/**
* get_nodeint_at_index - block
* Description: returns the nth node
* @head: parameter1
* @index: parameter2
* Return: listint_t
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int s;
	listint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}
	else {
		s = 0;
		while (head != NULL && s == index)
		{
			s++;
			head = head->next;
		}
		node = head;
	}
	return (node);
}
