#include "lists.h"
/**
 * list_len - block
 * Description: count len
 * @h: parameter
 * Return: int
 */
size_t list_len(const list_t *h)
{
	int s = 0;

	while (h != NULL)
	{
		s++;
		h = h->next;
	}
	return (s);
}
