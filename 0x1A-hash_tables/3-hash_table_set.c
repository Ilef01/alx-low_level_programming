#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: pointer to the hash table
 * @key: key of the node to be added
 * @value: value of the node to be added
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index(key, ht->size);
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
