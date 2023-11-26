#include "main.h"
/**
 * clear_bit - sets the value of a given index to 0
 * @n: the integer
 * @index: the given index
 * Return: 1 otherwise -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
