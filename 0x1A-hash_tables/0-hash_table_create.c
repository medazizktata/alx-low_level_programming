#include "hash_tables.h"
/**
* hash_table_create - block
* Description: creates a hash table
* @size: parameter
* Return: hash_table_t
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_table->size = size;
	hash_table->array = NULL;
	if (size == 0)
		return NULL;
	else
		return hash_table;
}
