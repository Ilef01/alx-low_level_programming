#include "main.h"
/**
 * get_bit - returns the value of a given index
 * @n: the integer
 * @index: the given index
 * Return: index value otherwise -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
