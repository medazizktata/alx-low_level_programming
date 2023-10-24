#include "lists.h"
/**
* free_listint - block
* Description: frees a listint_t list
* @head: parameter
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *h;

	while ((h = head) != NULL)
	{
		head = head->next;
		free(h);
	}
}
