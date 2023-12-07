#include "lists.h"
/**
* print_dlistint - block
* Description: prints all the elements of a dlistint_t list.
* @h: parameter
* Return: size_t
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t number;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
