#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint-free a doubly linked list
 * @head: pointer to the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (head == NULL)
	{
		free(head);
	}
	while (head->next != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
	free(head);
}
