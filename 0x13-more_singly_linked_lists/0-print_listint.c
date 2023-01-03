#include "lists.h"
/**
 * print_listint - block
 * Description: prints all elements of the list
 * @h: parameter
 * Return: integer
 */
size_t print_listint(const listint_t *h)
{
	int s = 0;

	while (h != NULL)
	{
		printf("%s\n", (*h).n);
		s++;
		h = (*h).next;
	}
	return (s);
}
