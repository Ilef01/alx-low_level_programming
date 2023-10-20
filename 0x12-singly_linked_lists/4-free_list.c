#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p = head;

	while (p != NULL)
	{
		head = head->next;
		free(p->str);
		free(p);
		p = head;
	}
}
