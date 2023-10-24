#include "lists.h"
/**
* delete_nodeint_at_index - block
* Description: deletes a node nth position
* @head: parameter1
* @index: parameter2
* Return: int
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int s;

	temp = *head;
	s = 0;
	if (index != 0)
	{
		while (temp != NULL && s != (index - 1))
		{
			s++;
			temp = temp->next;
		}
	}
	if ((temp == NULL) || (temp->next != NULL && index != 0))
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
	}
	else
	{
		temp->next = temp->next->next;
		free(temp->next);
	}
	return (1);
}
