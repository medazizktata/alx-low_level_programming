#include "dog.h"
/**
* free_dog - block
* Description: free dog
* @d: parameter
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
