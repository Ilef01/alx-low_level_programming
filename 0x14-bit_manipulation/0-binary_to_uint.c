#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts binary to decimal
 * @b: the pointer the the binary representation
 * Return: the decimal representation of b
 */
unsigned int binary_to_uint(const char *b)
{
	int decimal = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '1')
		{
			decimal = decimal << 1 | 1;
		}
		else if (*b == '0')
		{
			decimal = decimal << 1;
		}
		else
			return (0);
		b++;
	}
	return (decimal);
}
