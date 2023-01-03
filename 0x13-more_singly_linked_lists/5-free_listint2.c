#include "lists.h"
/**
 * free_listint2 - block
 * Description: free list
 * @head: parameter
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *liberator;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		liberator = *head;
		*head = (**head).next;
		free(liberator);
	}
	head = NULL;
}
