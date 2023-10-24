#include "lists.h"
/**
* sum_listint - block
* Description: sum of all the data (n) of a listint_t linked list
* @head: parameter2
* Return: int
*/
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (s);
	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
