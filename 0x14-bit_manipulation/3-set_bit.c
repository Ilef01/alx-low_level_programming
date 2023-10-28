#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: the pointer to the number
 * @index: the give index
 * Return: 1 if it worked and -1 in case of error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1UL << index);
	return (1);
}
