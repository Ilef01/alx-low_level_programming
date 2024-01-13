#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index-returns the nth node
 * @head: pointer to the list
 * @index: index of the node
 * Return: pointer the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp = head;

	for (i = 0; i < index && tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
