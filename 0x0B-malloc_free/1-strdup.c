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

	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		cp = malloc(sizeof(str) * (i + 1));
	if (cp == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		cp[j] = str[j];
	return (cp);
}
