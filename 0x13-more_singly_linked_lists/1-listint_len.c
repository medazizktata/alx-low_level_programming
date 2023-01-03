#include "lists.h"
/**
 * listint_len - block
 * Description: number of elements
 * @h: parameter
 * Return: integer
 */
size_t listint_len(const listint_t *h)
{
	int s = 0;

	while (h != NULL)
	{
		s++;
		h = (*h).next;
	}
	return (s);
}
