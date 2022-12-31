#include <stdio.h>
#include "dog.h"
/**
 * print_dog - main block
 * Description: prints dog
 * @d: parameter
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name : (nil)\n");
	else
		printf("Name : %s\n", d->name);
	printf("Age : %f", d->age);
	if (d->owner == NULL)
		printf("Owner : (nil)\n");
	else
		printf("Owner : %s\n", d->owner);
}
