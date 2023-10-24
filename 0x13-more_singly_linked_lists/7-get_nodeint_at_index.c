#include "lists.h"
/**
* get_nodeint_at_index - block
* Description: returns the nth node
* @head: parameter3
* @index: parameter4
* Return: listint_t
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int s;

	if (head == NULL)
	{
		return (NULL);
	}
	s = 0;
	while (head != NULL && s == index)
	{
		s++;
		head = head->next;
	}
	return (head);
}
