#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - strings concatenation
 * @s1: parameter1
 * @s2: parameter2
 * @n: parameter3
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, len1, len2, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
	       len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
	{
		s1 = malloc((len2 + 1) * sizeof(char));
		if (s1 == NULL)
			return (NULL);
		for (i = 0; s2[i] != '\0'; i++)
			s1[i + len1] = s2[i];
		s1[i] = '\0';
	}
	else
	{
		s1 = malloc((n + 1) * sizeof(char));
		if (s1 == NULL)
			return (NULL);
		for (j = 0; j < n; j++)
			s1[j + len1] = s2[j];
		s1[j] = '\0';
	}
	return (s1);
}
