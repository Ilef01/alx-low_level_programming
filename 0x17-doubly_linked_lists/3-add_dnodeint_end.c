#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_dnodeint_end-adds a new node at the end of a list
 * @head: pointer to a pointer pointing to a doubly linked list
 * @n: element to be added
 * Return: pointer to the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->prev = tmp;
	return (*head);
}
