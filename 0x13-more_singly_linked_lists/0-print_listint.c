#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all elements and returns the number of nodes
 * @h: the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	size_t count = 0;

	if (p == NULL)
		return (0);
	while (p != NULL)
	{
		count++;
		printf("%d\n", p->n);
		p = p->next;
	}
	return (count);
}
