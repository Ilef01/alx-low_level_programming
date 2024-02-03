#include "hash_tables.h"
/**
 * hash_djb2 - implements the djb2 algorithm
 *
 * @str: pointer to the array that will be given a hash value
 * Return: the hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;

	for (; *str; str++)
		hash = hash * 33 + *str;
	return (hash);
}
