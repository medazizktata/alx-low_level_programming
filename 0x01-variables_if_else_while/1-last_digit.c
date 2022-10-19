#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
		printf("%d is greater than 5\n", x);
	else if (x == 0)
		printf("%d is 0\n", x);
	else if (x < 6)
		printf("%d is less than 6 and not 0\n", x);
	return (0);
}
