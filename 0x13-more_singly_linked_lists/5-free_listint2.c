#include "lists.h"
/**
* free_listint2 - block
* Description: frees a listint_t list
* @head: parameter
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *h;
	listint_t *k;

	if (head != NULL)
	{
		k = *head;
		while ((h = k) != NULL)
		{
			k = k->next;
			free(h);
		}
		*head = NULL;
	}
}
