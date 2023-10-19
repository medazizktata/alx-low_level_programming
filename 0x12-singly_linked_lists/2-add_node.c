#include "lists.h"
/**
* add_node - block
* Description: adds a new node at the beginning of a list_t list
* @head: parameter
* @str: parameter
* Return: pointer to list_t
*/
list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (i = 0, str[i], i++)
		;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
