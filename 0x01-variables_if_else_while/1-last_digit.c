#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Description: Get a random number and check its last digit
 * Return: 0
 */
int main(void)
{
	int n;

	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
		printf("%i is greater than 5\n", x);
	else if (x == 0)
		printf("%i is 0\n", x);
	else if (x < 6)
		printf("%i is less than 6 and not 0\n", x);
	return (0);
}
