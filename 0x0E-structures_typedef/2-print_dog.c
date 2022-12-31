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
		printf("Name : (nil)");
	else
		printf("Name : %s", d->name)
	if (d->age == NULL)
		printf("Age : (nil)");
	else
		printf("Age : %d", &(d->age));
	if (d->owner == NULL)
		printf("Owner : (nil)");
	else
		printf("Owner : %s", d->owner);
	if (d == NULL)
		;
}
