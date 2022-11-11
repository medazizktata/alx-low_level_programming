#include "main.h"
/**
 * _strspn - block
 * Description: get string length
 * @s: parameter
 * @accept: parameter
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, cmpt = 0;

	for (i = 0, s[i] >= '\0', i++)
	{
		for (j = 0, accept[j] > '\0', j++)
		{
			if (s[i] == accept[j])
			{
				cmpt++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (cmpt);
}
