#include <stdlib.h>
#include "main.h"
/**
 * str_concat - block
 * Description: two string concatenation
 * @s1: parameter1
 * @s2: parameter2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;

	char *ccn;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			ccn = malloc(sizeof(char) * (i + j + 1));
		}
	}
	if (ccn == NULL)
	{
		free(ccn);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		ccn[k] = s1[k];
	}
	for (l = 0; l < j; l++)
		ccn[l + i] = s2[l];
	return (ccn);
	free(ccn);
}
