#include "lists.h"
/**
* dlistint_len - block
* Description: returns the number of elements in a linked dlistint_t list
* @h: parameter4
* Return: size_t
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
