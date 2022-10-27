#include "main.h"
/**
 * cap_string - block
 * Description: uppercase to lowercase
 * @s: parameter
 * Return: char
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 65 && s[i] <= 90)
			s[i] = s[i] + 32;
		i++;
	}
	return (s);
}
