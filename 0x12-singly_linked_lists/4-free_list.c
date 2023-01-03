#include "lists.h"
/**
 * free_list - block
 * Description: free list
 * @head: parameter
 * Return: void
 */
void free_list(listt *head)
{
	free(head);
}
