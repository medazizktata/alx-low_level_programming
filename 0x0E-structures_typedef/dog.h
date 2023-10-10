#ifndef _DOG
#define _DOG
/**
 * struct dog - struct that stores some information of a dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of the dog
 * Description: struct called "dog" that stores its name, age and owner name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
