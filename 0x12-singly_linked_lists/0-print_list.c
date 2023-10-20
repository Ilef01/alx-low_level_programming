#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all elements and returns the number of nodes
 * @h: the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *p = h;
	size_t count = 0;

	if (p == NULL)
		return (0);
	while (p != NULL)
	{
		count++;
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);
		p = p->next;
	}
	return (count);
}
