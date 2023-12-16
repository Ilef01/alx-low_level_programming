#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would flip to get
 * from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int count = 0;

	while (res)
	{
		count += res & 1;
		res >>= 1;
	}
	return (count);
}
