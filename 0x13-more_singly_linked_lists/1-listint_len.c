#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements
 * @h: the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
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
