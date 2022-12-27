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

	char *nl;

	int i, j, som;

	som = 0;
	nl = malloc(size of(char));
	*nl = '\n';
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		som += stringlen(av[i]) + 1;
	}
	ccn = malloc((som + 1) * sizeof(char));
	if (ccn == NULL)
	{
		free(ccn);
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		strccn(ccn, av[i], stringlen(av[i]));
		strccn(ccn, nl, 1);
	}
	if (ccn == NULL)
	{
		free(ccn);
		return (NULL);
	}
	ccn += '\0';
	return (ccn);
}
