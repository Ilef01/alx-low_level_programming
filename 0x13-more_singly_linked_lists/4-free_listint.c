#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a list
 * @head: the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
