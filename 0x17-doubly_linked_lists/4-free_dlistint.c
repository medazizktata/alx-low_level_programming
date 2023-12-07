#include "lists.h"
/**
* free_dlistint - block
* Description:  frees a dlistint_t list
* @head: parameter
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next_node;

	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}		
}
