#include "main.h"
/**
 * _strdup - block
 * Description: pointer to new allocated space
 * @str: parameter
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i;

	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
		i++;
	s = (char *)malloc(sizeof(char) * i);
	*s = *str;
	return (s);
}
