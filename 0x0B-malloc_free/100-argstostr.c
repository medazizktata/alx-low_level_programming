#include "main.h"
/**
* argstostr - block
* Description: concatenates all the arguments
* @ac: parameter1
* @av: parameter2
* Return: pointer to char
*/
char *argstostr(int ac, char **av)
{
	char *s;

	int i, j, ia, c;

	if (ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] = NULL)
		{
			return (NULL);
		}
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	s = malloc((c + 1) * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			s[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			s[ia] = av[i][j];
	}
	s[ia] = '\0';
	return (s);
}
