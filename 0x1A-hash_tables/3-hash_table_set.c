#include "hash_tables.h"
/**
* hash_table_set - block
* Description: adds an element to the hash table
* @ht: parameter1
* @key: parameter2
* @value: parameter3
* Return:int
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *placeholder;
	char valeur = *value;

	if (key == NULL)
		return 0;
	index = key_index(key, ht->size);
	if (ht->array[index] != NULL)
		placeholder = ht->array[index]->next;
	else
		placeholder = ht->array[index];
	placeholder->value = valeur;
	return 1;
}
