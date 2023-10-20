#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of the list
 * @head: a pointer to the pointer to the head of the list
 * @str: the string to be added
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *p = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
	return (new);
}
