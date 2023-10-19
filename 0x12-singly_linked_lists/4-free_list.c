#include "lists.h"
/**
* free_list - block
* Description:  frees a list_t list.
* @head: parameter
* Return: void
*/
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);	
}
