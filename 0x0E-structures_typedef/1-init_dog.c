#include "dog.h"
/**
* init_dog - block
* Description:  initialize a variable of type struct dog
* @d: parameter1
* @name: parameter2
* @age: parameter3
* @owner: parameter4
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
