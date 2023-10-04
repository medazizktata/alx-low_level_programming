#include "main.h"
/**
 * strdup - block
 * Description: pointer to new allocated space
 * @str: parameter
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	char *s;
	
	s=(char *)malloc(sizeof(char) * i);
	*s = *str;
	return (s);
}
