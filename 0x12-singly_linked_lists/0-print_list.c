#include "lists.h"
/**
 * print_list - block
 * Description: prints all the elements of a list_t list.
 * @h: parameter
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t s;

	s = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		s++;
		h = h->next;
	}
	return (s);
}
