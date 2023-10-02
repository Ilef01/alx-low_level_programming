#include "main.h"
/**
 * _memset - fills bytes of a memory with a constant
 * @s: the pointer
 * @b: the constant
 * @n: the number of bytes
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
