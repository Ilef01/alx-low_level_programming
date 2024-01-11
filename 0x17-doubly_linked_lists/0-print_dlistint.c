#include <stdio.h>
/**
 * print_dlistint-prints all elements of a list
 * @h: pointed to the doubly linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t s = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		s += 1;
	}
	return (s);
}
