#include "lists.h"
/**
* add_node_end - block
* Description: adds a new node at the end of a list_t list
* @head: parameter1
* @str: parameter2
* Return: pointer to list_t
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t leng;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	temp = *head;
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	new->str = strdup(str);
	for (leng = 0; str[leng]; leng++)
		;
	new->len = leng;
	new->next = NULL;
	return (*head);

}
