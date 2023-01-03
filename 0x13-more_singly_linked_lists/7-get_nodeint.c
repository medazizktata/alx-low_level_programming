#include "lists.h"
/**
 * get_nodeint_at_index - block
 * Description: returns the nth nodeof list
 * @head: parameter
 * @index: parameter
 * Return: index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	int s;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
		head = (*head).next;
	if (i != index)
		return (NULL);
	s = (*head).n;
	return (s);
}


