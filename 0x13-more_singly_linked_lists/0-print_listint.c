#include "lists.h"
/**
* print_listint - block
* Description: prints all the elements of a listint_t list.
* @h: parameter
* Return: size_t
*/
size_t print_listint(const listint_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
