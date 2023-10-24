#include "lists.h"
/**
* deletenodeint_at_index - block
* Description: inserts a new node at a given position
* @head: parameter1
* @idx: parameter2
* @n: parameter3
* Return: pointer to listint_t
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int s;

	if (*head == NULL && idx != 0)
		return (-1);
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
	if (index == 0)
	{
		*head = temp->next;
		temp->next = NULL;
		free(temp);
	}
	else
	{
		temp->next = temp->next->next;
		temp->next->next = NULL;
		free(temp->next);	
	}
	return (1);
}
