#include "dog.h"
/**
* new_dog - block
* Description:  creates a new dog
* @name: parameter1
* @age: parameter2
* @owner: parameter3
* Return: pointer to dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = (dog_t*)malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	init_dog(d, name, age, owner);
	return d; 	
}
