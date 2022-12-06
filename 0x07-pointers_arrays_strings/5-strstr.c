#include "main.h"
/**
 * _strstr - main block
 * Description: locates a substring
 * @haystack: parameter1
 * @needle: parameter2
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	char chaine;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = 0; needle[j] > '\0', j++)
		{
			if (haystack[i] == needle[j])
			{
				chaine += haystack[i];
				if (chaine == needle)
				{
					return (haystack);
				}
			}
		}
	}
	return (0);
}
