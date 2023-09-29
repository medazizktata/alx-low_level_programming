#include "main.h"
/**
 * is_prime - block
 * Description: verifies if is a prime number
 * @n: parameter1
 * @c: parameter2
 * Return: int
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
		{
			return (1);
		}
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - block
 * Description: verify if prime or not
 * @n: parameter
 * Return: int
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
