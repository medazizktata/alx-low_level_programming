#include "main.h"
/**
 * strdup - block
 * Description: pointer to new allocated space
 * @str: parameter
 * Return: pointer
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	char *s = (char *)malloc(sizeof(char) * i);
	*s = *str;
	return (s);
}
