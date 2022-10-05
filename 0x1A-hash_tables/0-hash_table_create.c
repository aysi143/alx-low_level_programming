#include "hash_tables.h"

/**
  * hash_table_create - creattes a hash table.
  * @size: sizeof the hash table.
  *
  * Return: pointer to has table type.
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (!size)
		return (NULL);

	ht = calloc(1, sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
