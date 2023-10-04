#include "main.h"
/**
 * str_concat - block
 * Description: concatenate two strings
 * @s1: paramter1
 * @s2: parameter2
 * Retrun: string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;

	int i, j, size1, size2, sizes;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	size1 = 0;
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	sizes = size1 + size2 + 1;
	s = (char *)malloc(sizes * sizeof(char));
	i = 0;

	j = 0;

	while(s1[i] != '\0')
		s[i] += s1[i];
	while(s2[j] != '\0')
		s[i] += s2[j];
	return (s);
}
