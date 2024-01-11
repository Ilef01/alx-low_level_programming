#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len-returns the number of elements in a linked list
 * @h: pointed to the doubly linked list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t s = 0;

	while (tmp != NULL)
	{
		s += 1;
		tmp = tmp->next;
	}
	return (s);
}
