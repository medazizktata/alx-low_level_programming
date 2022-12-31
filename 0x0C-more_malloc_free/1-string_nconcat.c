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
	unsigned int i, len1, len2;

	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n >= len2)
		n = len2;
	s = malloc((len1 + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1 + n ; i++)
	{
		if (i < len1)
			s[i] = s1[i];
		else
			s[i] = s2[i - len1 - n];
	}
	s[i] = '\0';
	return (s);
}
