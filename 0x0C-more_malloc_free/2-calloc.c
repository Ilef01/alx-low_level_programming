#include "main.h"
#include <stdlib.h>
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
	return (p);
}
