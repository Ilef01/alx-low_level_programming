#include "main.h"
#include <stdlib.h>
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
/**
 * *_calloc - allocates memory for an array
 * @nmemb: the number of elements
 * @size: the size of each element
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
