#include "main.h"
/**
 * leet - block
 * Description: change to leet writting
 * @s: parameter1
 * Return: pointer
 */
char *leet(char *s)
{
	char let[] = "aeotl";

	char num[] = "43071";

	int l = 0;

	int i;

	while (s[l] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[l] == let[i] || s[l] == let[i] - 32)
				s[l] = num[i];
		}
		l++;
	}
	return (s);
}
