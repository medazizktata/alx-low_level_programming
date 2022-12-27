#include <stdlib.h>
#include "main.h"
/**
 * stringlen - block
 * Description: returns length of string
 * @s: parameter
 * Return: integer
 */
unsigned int stringlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * strccn - block
 * Description: concatenation
 * @ch: parameter
 * @sh: parameter
 * @n: parameter
 * Return: string
 */
char *strccn(char *ch, char *sh, int n)
{
	int i, chlen;

	chlen = stringlen(ch);
	for (i = 0; i < n && ch[i] != '\0'; i++)
	{
		ch[i + chlen] = sh[i];
	}
	return (ch);
}
/**
 * argstostr - block
 * Description: arguments concatenation
 * @ac: parameter
 * @av: parameter
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
	char *ccn;

	int i;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		av[i] += '\n';
		ccn = malloc(stringlen(av[i]) + 1);
		if (ccn == NULL)
		{
			free(ccn);
			return (NULL);
		}
		strccn(ccn, av[i], stringlen(av[i]));
	}
	if (ccn == NULL)
	{
		free(ccn);
		return (NULL);
	}
	ccn += '\0';
	return (ccn);
}
