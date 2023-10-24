#include "lists.h"
/**
* listint_len - block
* Description: returns the number of elements in a linked listint_t list
* @h: parameter
* Return: size_t
*/
size_t listint_len(const listint_t *h)
{
	size_t k;

	k = 0;

	while (h != NULL)
	{
		k++;
		h = h->next;
	}
	return (k);
}
