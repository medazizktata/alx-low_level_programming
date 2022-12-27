#include <stdlib.h>
#include "main.h"
/**
 * str_len - block
 * Description: returns length of string
 * @s: char type
 * Return: integer
 */
int str_len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * str_ccn - block
 * Description: concatenates two strings
 * @ch: parameter
 * @sh: parameter
 * @n: parameter
 * Return: pointer
 */
char *str_ccn(char *ch; char *sh, int n)
{
	int chlen, i;

	chlen = str_len(ch);
	for (i = 0; i < n && ch[i] != '\0'; i++)
	{
		ch[chlen + i] = sh[i];
	}
	return (ch);
}
/**
 * str_concat - main block
 * Description: two string concatenation
 * @s1: parameter1
 * @s2: parameter2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2;

	char *ccn;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = str_len(s1);
	len_s2 = str_len(s2);
	ccn = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (ccn == NULL)
	{
		free(ccn);
		return (NULL);
	}
	str_ccn(ccn, s1, s1_len);
	str_ccn(ccn, s2, s2_len);
	ccn += '\0';
	return (ccn);
}
