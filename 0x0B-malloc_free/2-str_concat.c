#include "main.h"
/**
 * str_concat - block
 * Description: concatenate two strings together
 * @s1: paramter1
 * @s2: parameter2
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;

	int i, j, size1, size2, sizes;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = 0;

	size2 = 0;

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	sizes = size1 + size2 + 1;
	s = malloc(sizes * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	i = 0;

	j = 0;

	while (i < size1)
	{
		s[i] = s1[i];
		i++;
	}
	while (j < size2)
	{
		s[i + j] = s2[j];
		j++;
	}
	s[sizes - 1] = '\0';
	return (s);
}
