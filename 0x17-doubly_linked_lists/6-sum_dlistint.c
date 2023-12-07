#include "lists.h"
/**
* sum_dlistint - block
* Description: returns the sum of all the data (n) of a dlistint_t linked list
* @head: parameter2
* Return: int
*/
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
