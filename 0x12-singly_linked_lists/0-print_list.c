#include "main.h"
/**
 * print_list - block
 * Description: prints all the elements of a list_t list.
 * @h: parameter
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	int s = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%d] %s", h.len, h->str);
			s++;
		}
		h = h->next;
	}
	printf("-> %d elements", s);

}
