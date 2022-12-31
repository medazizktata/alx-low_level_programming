#include "dog.h"
/**
 * init_dog - initiliaze variable type dog
 * @d: parameter1
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description : dog variables
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		name = (*d).name;
		age = (*d).age;
		owner = (*d).owner;
	}
}
