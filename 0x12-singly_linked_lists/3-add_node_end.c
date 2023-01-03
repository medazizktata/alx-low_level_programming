#include "lists.h"
/**
 * _strlen - block
 * Description: returns string length
 * @str: parameter
 * Return: integer
 */
int _strlen(const char *str)
{
	int s = 0;

	while (str[s] != '\0')
		s++;
	return (s);
}
/**
 * add_node_end - block
 * Description: add node to the end
 * @head: parameter1
 * @str: parameter2
 * Return: adress
 */
lits_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	while (*head->next != NULL)
		*head++;
	*head->next = newnode;
	if (str == NULL)
	{
		newnode->str = 0;
		newnode->len = 0;
		newnode->next = NULL;
		return (newnode);
	}
	else
	{
		newnode->str = strdup(str);
		if (newnode->str == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = _strlen(str);
		newnode->next = NULL;
		return (newnode);
	}
	return (NULL);
}
