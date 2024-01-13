#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint-free a doubly linked list
 * @head: pointer to the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;
	while (tmp != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
