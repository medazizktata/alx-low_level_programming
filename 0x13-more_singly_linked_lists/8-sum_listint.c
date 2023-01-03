#include "lists.h"
/**
 * sum_listint - block
 * Description: returns the sums of all nodes
 * @head: parameter
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		s += (*head).n;
		head = (*head).next;
	}
	return (s);
}
