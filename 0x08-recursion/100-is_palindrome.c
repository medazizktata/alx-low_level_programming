#include "main.h"
/**
 * is_palindrome - block
 * Description: verify palindrome or not
 * @s: parameter
 * Return: int
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	if (*s != '\0')
	{
		char r;

		r = is_palindrome(s + 1) + r;
	}
	if (s == r)
		return (1);
	else
		return (0);
}
