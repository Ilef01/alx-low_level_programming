#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer pointing to the string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int decimal = 0;
	unsigned int l = strlen(b);

	if (b == NULL)
		return (0);
	for (i = 0; i < l; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		decimal = (decimal << 1) + (b[i] - '0');
	}
	return (decimal);
}