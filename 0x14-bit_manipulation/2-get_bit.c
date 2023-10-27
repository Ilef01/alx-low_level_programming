#include "main.h"
/**
 * get_bit - returns the value of a given index bit
 * @n: the number
 * @index: the give index
 * Return: the value of the bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
