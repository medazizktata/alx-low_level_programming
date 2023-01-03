#include "lists.h"
/**
 * free_listint - vlock
 * Description: free the list
 * @head: list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *liberador;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		liberador = head;
		head = (*head).next;
		free(liberador);
	}
}
