#include "hash_tables.h"
/**
* key_index - block
* Description: function that gives you the index of a key
* @key: parameter
* @size: parameter2
* Return: int
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i, index;

	i = hash_djb2(key);
	index = i % size;
	return (index);
}
