#include "lists.h"
/**
* list_len - block
* Description: returns the number of elements in a linked list
* @h: parameter
* Return: size_t
*/
size_t list_len(const list_t *h)
{
	size_t s; 

	s = 0;

	while(h != NULL)
		s++;
	return (s);
}
