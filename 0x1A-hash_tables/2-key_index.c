#include "hash_tables.h"
/**
 * key_index - generates an idex for a key
 *
 * @key: the key to be given an index
 * @size: the size of the array of the size table
 * Return: the index at which the key/value pair should
 *         be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
