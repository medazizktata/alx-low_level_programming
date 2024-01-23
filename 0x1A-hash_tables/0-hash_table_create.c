#include "hash_tables.h"
/**
* hash_table_create - block
* Description: creates a hash table
* @size: parameter
* Return: hash_table_t
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	if (size == 0)
		return NULL;
	else
	{
		hash_table_t *hash_table = malloc(sizeof(hash_table_t));
		if (hash_table == NULL)
			return NULL;
		hash_table->size = size;
		hash_table->array = malloc(sizeof(hash_node_s *) * size);
		if (hash_table-> array == NULL)
		{
			free(hash_table);
			return NULL;
		}
		return hash_table;
	}
}
