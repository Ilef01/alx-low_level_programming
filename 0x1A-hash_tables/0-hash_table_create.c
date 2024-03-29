#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 *
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 *         or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);
	return (ht);
}
