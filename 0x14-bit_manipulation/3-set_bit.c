#include "main.h"
/**
 * set_bit - sets the value of a given index to 1
 * @n: the integer
 * @index: the given index
 * Return: 1 otherwise -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);
	*n |= (1UL << index);
	return (1);
}
