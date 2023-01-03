#include "lists.h"
/**
 * _strlen - block
 * Description: returns string length
 * @ch: parameter
 * Return: int
 */
int _strlen(char ch)
{
	int i = 0;

	while (ch[i] != '\0')
		i++;
	return (i);
}
/**
 * add_node - block
 * Description: add a new node
 * @head: parameter1
 * @str: parameter2
 * Return: adress
 */
list_t *add_node(list_t **head, const char *str)
{
	char ch = srtdup(str);
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	if (str == NULL)
	{
		newnode->str = 0;
		newnode->len = 0;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else
	{
		newnode->str = ch;
		if (newnode->str == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = _strlen(str);
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	return (NULL);
}
