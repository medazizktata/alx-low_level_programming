#include <stdlib.h>
#include "main.h"
/**
 * _strdup - block
 * Description: returns a pointer to allocated space in memory
 * @str: parameter1;
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *cp;

	if (str == NULL)
		return (NULL);
	cp = malloc(sizeof(str));
	if (cp == NULL)
		return (NULL);
	*cp = *str;
	return (cp);
}


