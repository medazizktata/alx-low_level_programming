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
	char s;

	int i;

	if (ac == 0 || av == NULL)
		return (NULL);
	s = callac(ac, sizeof(char);
	for (i = 0; i < ac; i++)
	{
		s += av[i];
		s += '\n';
	}
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	return (s);
}
