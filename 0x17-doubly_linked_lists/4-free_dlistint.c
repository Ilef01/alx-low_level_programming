#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
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
		exit(EXIT_FAILURE);
	}
	while (head->next != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
	free(head);
}
