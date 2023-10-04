#include "main.h"
/**
 * i_strdup - block
 * Description: pointer to new allocated space
 * @str: parameter
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, size;

	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	size = 0;

	while (str[size] != '\0')
		size++;
	s = (char *)malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	i = 0;

	while (i <= size)
		s[i] = str[i];
	return (s);
}
