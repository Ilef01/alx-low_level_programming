#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements
 * @h: the list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *p = h;
	size_t count = 0;

	if (p == NULL)
		return (0);
	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}
