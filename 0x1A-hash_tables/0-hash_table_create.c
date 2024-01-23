#include "hash_tables.h"
/**
* hash_table_create - block
* Description: creates a hash table
* @size: parameter
* Return: hash_table_t
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_node_s) * size);
	if (hash_table == NULL)
		return NULL;
	else
		hash_table->size = size;
		return hash_table;
}
